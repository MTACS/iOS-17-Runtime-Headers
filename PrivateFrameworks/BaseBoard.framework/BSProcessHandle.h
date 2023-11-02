
@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {
    BSAuditToken * _auditToken;
    NSString * _bundleID;
    NSString * _name;
    int  _pid;
    bool  _resolvedBundleID;
    BSMachPortTaskNameRight * _taskNameRight;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (nonatomic, readonly, copy) NSString *cx_applicationIdentifier;
@property (nonatomic, readonly) LSApplicationRecord *cx_applicationRecord;
@property (nonatomic, readonly, copy) NSSet *cx_capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSMachPortTaskNameRight *taskNameRight;
@property (getter=isValid, nonatomic, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)processHandle;
+ (id)processHandleForAuditToken:(id)arg1;
+ (id)processHandleForAuditToken:(id)arg1 bundleID:(id)arg2;
+ (id)processHandleForNSXPCConnection:(id)arg1;
+ (id)processHandleForPID:(int)arg1;
+ (id)processHandleForPID:(int)arg1 bundleID:(id)arg2;
+ (id)processHandleForTaskNameRight:(id)arg1;
+ (id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2;
+ (id)processHandleForXPCConnection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (id)valueForEntitlement:(id)arg1;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)cx_applicationIdentifier;
- (id)cx_applicationRecord;
- (id)cx_capabilities;

@end
