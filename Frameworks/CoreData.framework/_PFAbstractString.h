
@interface _PFAbstractString : NSString

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (Class)classForKeyedUnarchiver;

- (const char *)_fastCStringContents:(bool)arg1;
- (const unsigned short*)_fastCharacterContents;
- (const char *)cString;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)description;
- (unsigned long long)fastestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)smallestEncoding;

@end
