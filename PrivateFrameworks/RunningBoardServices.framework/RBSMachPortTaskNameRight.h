
@interface RBSMachPortTaskNameRight : NSObject <NSCopying, NSSecureCoding, RBSXPCSecureCoding> {
    RBSAuditToken * _auditToken;
    int  _pid;
    RBSMachPort * _port;
}

@property (nonatomic, readonly) RBSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

+ (id)portForSelf;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;

- (void).cxx_destruct;
- (id)auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)invalidate;
- (bool)isUsable;
- (int)pid;
- (unsigned int)port;

@end
