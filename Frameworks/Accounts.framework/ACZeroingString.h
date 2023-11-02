
@interface ACZeroingString : NSString {
    unsigned short * _characters;
    unsigned long long  _length;
}

@property (readonly) unsigned short*characters;
@property (readonly) unsigned long long length;

+ (id)_emptyString;
+ (Class)classForKeyedUnarchiver;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (id)_compatibleCopy;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned short*)characters;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (unsigned long long)length;
- (id)replacementObjectForCoder:(id)arg1;

@end
