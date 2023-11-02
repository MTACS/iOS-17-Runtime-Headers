
@interface LiveFSHexAndASCIIString : NSString {
    NSData * data;
}

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)data;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;

@end
