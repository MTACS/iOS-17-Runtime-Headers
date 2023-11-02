
@interface RBSAuditToken : NSObject <NSCopying, NSSecureCoding, RBSXPCSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int pidversion;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } realToken;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)tokenFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x1[8]; }*)arg1;
+ (id)tokenFromXPCConnection:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (int)pidversion;
- (struct { unsigned int x1[8]; })realToken;

@end
