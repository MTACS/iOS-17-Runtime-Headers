
@interface EXAuditToken : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
}

@property (readonly) struct { unsigned int x1[8]; } auditToken;

+ (id)auditToken:(const struct { unsigned int x1[8]; }*)arg1 entitlementValue:(id)arg2 ofClass:(Class)arg3;
+ (bool)auditToken:(const struct { unsigned int x1[8]; }*)arg1 hasRequiredEntitlements:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (struct { unsigned int x1[8]; })auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
