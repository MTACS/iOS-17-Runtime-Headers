
@interface NSConstantFloatNumber : NSNumber {
    float  _value;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)new;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (bool)boolValue;
- (BOOL)charValue;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (id)init;
- (int)intValue;
- (long long)integerValue;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
