
@interface _NSBPlistMappedString : NSString {
    unsigned long long  payload;
}

+ (id)createStringWithOffset:(long long)arg1 intoMappingData:(id)arg2;
+ (void)initialize;

- (const char *)_fastCStringContents:(bool)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (unsigned long long)smallestEncoding;

@end
