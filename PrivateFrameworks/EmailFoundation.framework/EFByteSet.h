
@interface EFByteSet : NSObject <NSCopying, NSMutableCopying> {
    struct bitset<256UL> { 
        unsigned long long __first_[4]; 
    }  _bitString;
}

+ (id)asciiWhitespaceSet;

- (id).cxx_construct;
- (bool)byteIsMember:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
