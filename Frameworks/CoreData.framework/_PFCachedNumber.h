
@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (bool)boolValue;
- (BOOL)charValue;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (float)floatValue;
- (void)getValue:(void*)arg1;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (int)intValue;
- (long long)integerValue;
- (long long)longLongValue;
- (long long)longValue;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

@end
