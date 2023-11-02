
@interface USEntitlements : NSObject

+ (id)_setValueForEntitlement:(struct __CFString { }*)arg1 expectedElementClass:(Class)arg2;
+ (id)_valueForEntitlement:(struct __CFString { }*)arg1 expectedClass:(Class)arg2;
+ (id)_valueForEntitlement:(struct __CFString { }*)arg1 secTask:(struct __SecTask { }*)arg2;
+ (id)readCurrentBundleIdentifier;
+ (id)readCurrentServices;

@end
