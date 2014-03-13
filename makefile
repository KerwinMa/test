.PHONY : clean

test : test.o
	$(LINK.C) -o $@ $^
	

%.o : %.cpp
	$(COMPILE.C) $(OUTPUT_OPTION) $<

clean:
	rm *.o test
