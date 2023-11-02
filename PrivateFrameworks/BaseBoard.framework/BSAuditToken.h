
@interface BSAuditToken : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleID;
    bool  _resolvedBundleID;
    BSSecTask * _secTask;
}

@property (nonatomic, readonly) int asid;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (readonly) unsigned long long hash;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } realToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long versionedPID;

+ (id)invalidToken;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x1[8]; }*)arg1;
+ (id)tokenFromMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
+ (id)tokenFromNSXPCConnection:(id)arg1;
+ (id)tokenFromXPCConnection:(id)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;

- (void).cxx_destruct;
- (int)asid;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)egid;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)euid;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasSameProcessAsAuditToken:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInvalid;
- (int)pid;
- (struct { unsigned int x1[8]; })realToken;
- (id)valueForEntitlement:(id)arg1;
- (long long)versionedPID;

@end
