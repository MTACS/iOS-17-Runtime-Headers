
@interface GCFLocalizedString : NSString

@property (readonly) NSBundle *bundle;
@property (readonly) NSString *key;
@property (readonly) NSString *table;

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (id)_realizedString;
- (id)bundle;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(id)arg1 arg:(id)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithKey:(id)arg1 sourceBundle:(id)arg2;
- (id)initWithKey:(id)arg1 sourceBundle:(id)arg2 table:(id)arg3 locale:(id)arg4;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id*)arg5;
- (id)key;
- (unsigned long long)length;
- (id)table;

@end
