
@interface RBSProcessHandle : NSObject <NSSecureCoding, RBSProcessIdentifier, RBSXPCSecureCoding> {
    BSAuditToken * _bsAuditToken;
    RBSProcessBundle * _bundle;
    NSString * _cachedName;
    NSObject<OS_xpc_object> * _codedHandle;
    unsigned long long  _data;
    unsigned int  _euid;
    RBSProcessIdentity * _identity;
    BSProcessHandle * _legacyHandle;
    RBSProcessMonitor * _monitor;
    int  _pid;
    RBSMachPortTaskNameRight * _taskPort;
}

@property (getter=isXPCService, nonatomic, readonly) bool XPCService;
@property (nonatomic, readonly) RBSProcessLimitations *activeLimitations;
@property (getter=isApplication, nonatomic, readonly) bool application;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *beforeTranslocationBundlePath;
@property (nonatomic, readonly) RBSProcessBundle *bundle;
@property (nonatomic, readonly, copy) NSString *consistentJobLabel;
@property (getter=hasConsistentLaunchdJob, nonatomic, readonly) bool consistentLaunchdJob;
@property (nonatomic, readonly) RBSProcessState *currentState;
@property (getter=isDaemon, nonatomic, readonly) bool daemon;
@property (nonatomic, readonly, copy) NSString *daemonJobLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessHandle *hostProcess;
@property (nonatomic, readonly, copy) RBSProcessIdentity *identity;
@property (nonatomic, readonly, copy) RBSProcessInstance *instance;
@property (nonatomic, readonly) RBSProcessExitContext *lastExitContext;
@property (getter=isLifecycleManaged, nonatomic, readonly) bool lifecycleManaged;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int platform;
@property (getter=isReported, nonatomic, readonly) bool reported;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSString *xpcServiceIdentifier;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)currentProcess;
+ (id)handleForIdentifier:(id)arg1 error:(out id*)arg2;
+ (id)handleForKey:(unsigned long long)arg1 fetchIfNeeded:(bool)arg2;
+ (id)handleForLegacyHandle:(id)arg1 error:(out id*)arg2;
+ (id)handleForPredicate:(id)arg1 error:(out id*)arg2;
+ (id)observeForImminentAssertionsExpiration:(id /* block */)arg1;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeLimitations;
- (struct { unsigned int x1[8]; })auditToken;
- (id)beforeTranslocationBundlePath;
- (id)bundle;
- (id)consistentJobLabel;
- (id)currentState;
- (id)currentStateMatchingDescriptor:(id)arg1;
- (id)daemonJobLabel;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (double)elapsedCPUTimeForFrontBoard;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned int)euid;
- (id)executablePath;
- (void)fullEncode:(id)arg1 forKey:(id)arg2;
- (bool)hasConsistentLaunchdJob;
- (unsigned long long)hash;
- (id)hostProcess;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)initWithInstance:(id)arg1 auditToken:(id)arg2 bundleData:(id)arg3 manageFlags:(unsigned char)arg4 beforeTranslocationBundlePath:(id)arg5 executablePath:(id)arg6 cache:(bool)arg7;
- (id)initWithLaunchContext:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (id)instance;
- (void)intendToExitWith:(id)arg1;
- (bool)isApplication;
- (bool)isDaemon;
- (bool)isEqual:(id)arg1;
- (bool)isLifecycleManaged;
- (bool)isManaged;
- (bool)isReported;
- (bool)isValid;
- (bool)isXPCService;
- (id)lastExitContext;
- (id)legacyHandle;
- (bool)matchesProcess:(id)arg1;
- (void)monitorForDeath:(id /* block */)arg1;
- (id)name;
- (int)pid;
- (int)platform;
- (id)processPredicate;
- (int)rbs_pid;
- (id)uuid;
- (id)xpcServiceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)fb_canTaskSuspend;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (id)pb_shortDesc;

@end
