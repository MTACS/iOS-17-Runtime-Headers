
@interface LNEntitlementsValidator : NSObject

+ (bool)validateEntitlement:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 validator:(id /* block */)arg3;
+ (bool)validateEntitlement:(id)arg1 forCurrentTaskWithValidator:(id /* block */)arg2;
+ (bool)validateEntitlement:(id)arg1 secTaskRef:(struct __SecTask { }*)arg2 validator:(id /* block */)arg3;

@end
