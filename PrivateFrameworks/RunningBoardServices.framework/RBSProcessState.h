
@interface RBSProcessState : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSObject<OS_xpc_object> * _codedState;
    NSMutableDictionary * _codedStateCache;
    unsigned long long  _codedValues;
    unsigned char  _debugState;
    NSSet * _endowmentNamespaces;
    NSSet * _legacyAssertions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _preventedFromLaunching;
    NSSet * _primitiveAssertions;
    RBSProcessHandle * _process;
    NSSet * _tags;
    unsigned char  _taskState;
    unsigned char  _terminationResistance;
}

@property (nonatomic, readonly, copy) NSSet *assertions;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *codedState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned char debugState;
@property (getter=isDebugging, nonatomic, readonly) bool debugging;
@property (readonly, copy) NSString *description;
@property (getter=isEmptyState, nonatomic, readonly) bool emptyState;
@property (nonatomic, copy) NSSet *endowmentNamespaces;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *legacyAssertions;
@property (getter=isPreventedFromLaunching, nonatomic, readonly) bool preventedFromLaunching;
@property (nonatomic, copy) NSSet *primitiveAssertions;
@property (nonatomic, readonly) RBSProcessHandle *process;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *tags;
@property (nonatomic) unsigned char taskState;
@property (nonatomic) unsigned char terminationResistance;

+ (void)setActiveStateDescriptor:(id)arg1;
+ (id)stateWithProcess:(id)arg1;
+ (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id*)arg3;
+ (id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 service:(id)arg3 error:(out id*)arg4;
+ (bool)supportsRBSXPCSecureCoding;
+ (id)untrackedRunningStateforProcess:(id)arg1;

- (void).cxx_destruct;
- (id)assertions;
- (id)codedState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)debugState;
- (id)description;
- (void)encodeWithPreviousState:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowmentNamespaces;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isDebugging;
- (bool)isDifferentFromState:(id)arg1 significantly:(out bool*)arg2;
- (bool)isEmptyState;
- (bool)isEqual:(id)arg1;
- (bool)isPreventedFromLaunching;
- (bool)isRunning;
- (id)legacyAssertions;
- (id)primitiveAssertions;
- (id)process;
- (void)setDebugState:(unsigned char)arg1;
- (void)setEndowmentNamespaces:(id)arg1;
- (void)setLegacyAssertions:(id)arg1;
- (void)setPrimitiveAssertions:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTaskState:(unsigned char)arg1;
- (void)setTerminationResistance:(unsigned char)arg1;
- (id)tags;
- (unsigned char)taskState;
- (unsigned char)terminationResistance;

@end
