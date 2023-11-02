
@interface _PASEntitlement : NSObject

+ (bool)_trueBooleanEntitlementCheckWithSecTask:(struct __SecTask { }*)arg1 entitlement:(id)arg2 logHandle:(id)arg3;
+ (bool)hasTrueBooleanEntitlement:(id)arg1 logHandle:(id)arg2;
+ (bool)taskWithAuditToken:(struct { unsigned int x1[8]; })arg1 hasTrueBooleanEntitlement:(id)arg2 logHandle:(id)arg3;

@end
