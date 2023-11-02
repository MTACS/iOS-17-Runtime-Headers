
@interface NSPlaceholderString : NSString

- (id)_initWithFormat:(id)arg1 locale:(id)arg2 options:(id)arg3 arguments:(char *)arg4;
- (id)_initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 options:(id)arg4 error:(id*)arg5 arguments:(char *)arg6;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id*)arg5;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
