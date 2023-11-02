
@interface RBSProcessPredicate : NSObject <RBSProcessMatching, RBSXPCSecureCoding> {
    RBSProcessPredicateImpl * _predicate;
}

@property (nonatomic, readonly, copy) NSString *beforeTranslocationBundlePath;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly, copy) NSString *extensionPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly) RBSProcessPredicateImpl *predicate;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)predicate;
+ (id)predicateForClearTheBoard;
+ (id)predicateForMemoryMonitor;
+ (id)predicateForSymptomsd;
+ (id)predicateMatching:(id)arg1;
+ (id)predicateMatchingAnyPredicate:(id)arg1;
+ (id)predicateMatchingAuid:(unsigned int)arg1;
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)arg1;
+ (id)predicateMatchingBundleIdentifier:(id)arg1;
+ (id)predicateMatchingBundleIdentifiers:(id)arg1;
+ (id)predicateMatchingDextsBundledWithBundleID:(id)arg1;
+ (id)predicateMatchingEuid:(unsigned int)arg1;
+ (id)predicateMatchingExecPathStartsWith:(id)arg1;
+ (id)predicateMatchingExtensionPoint:(id)arg1;
+ (id)predicateMatchingHandle:(id)arg1;
+ (id)predicateMatchingHostIdentifier:(id)arg1;
+ (id)predicateMatchingIdentifier:(id)arg1;
+ (id)predicateMatchingIdentifiers:(id)arg1;
+ (id)predicateMatchingIdentity:(id)arg1;
+ (id)predicateMatchingJobLabel:(id)arg1;
+ (id)predicateMatchingLSApplicationIdentity:(id)arg1;
+ (id)predicateMatchingLaunchServicesProcesses;
+ (id)predicateMatchingPlatform:(int)arg1;
+ (id)predicateMatchingPredicates:(id)arg1;
+ (id)predicateMatchingProcessTypeApplication;
+ (id)predicateMatchingServiceName:(id)arg1;
+ (id)predicateMatchingSuspendableProcesses;
+ (id)predicateMatchingTarget:(id)arg1;
+ (id)predicateNotMatchingPredicate:(id)arg1;
+ (id)predicatePowerLogProcesses;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (unsigned int)auid;
- (id)beforeTranslocationBundlePath;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned int)euid;
- (id)extensionPoint;
- (unsigned long long)hash;
- (id)initWithPredicate:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jobLabel;
- (bool)matchesProcess:(id)arg1;
- (id)predicate;
- (id)processIdentifier;
- (id)processIdentifiers;
- (id)processIdentity;
- (id)processPredicate;
- (id)serviceName;

@end
