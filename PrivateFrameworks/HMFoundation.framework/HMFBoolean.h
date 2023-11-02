
@interface HMFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)booleanWithBool:(bool)arg1;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (bool)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithBool:(bool)arg1;
- (const char *)objCType;

@end
