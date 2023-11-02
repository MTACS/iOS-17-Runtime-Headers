
@interface HMDBackgroundOperation : HMFObject <HMFLogging, NSSecureCoding> {
    HMDBackgroundOperationManager * _bgOpsManager;
    <HMDBackgroundOperationDataSource> * _dataSource;
    NSDate * _deferralDate;
    NSMutableSet * _dependencies;
    NSDate * _expirationDate;
    long long  _failureCount;
    bool  _finished;
    HMDHomeManager * _homeManager;
    bool  _isExpired;
    bool  _isReadyToRun;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _operationUUID;
    NSOperationQueue * _queue;
    NSDate * _scheduledDate;
    NSDictionary * _userData;
}

@property (nonatomic, retain) HMDBackgroundOperationManager *bgOpsManager;
@property (nonatomic, readonly) <HMDBackgroundOperationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDate *deferralDate;
@property (readonly) NSMutableSet *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *expirationDate;
@property (nonatomic) long long failureCount;
@property bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) bool isExpired;
@property (nonatomic) bool isReadyToRun;
@property (nonatomic, readonly) NSUUID *operationUUID;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (readonly) NSDate *scheduledDate;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *userData;

+ (id)logCategory;
+ (bool)persistent;
+ (id)predicate;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)AllDependencies;
- (void)addDependency:(id)arg1;
- (id)attributeDescriptions;
- (id)bgOpsManager;
- (id)dataSource;
- (void)deferWithFailureCount:(long long)arg1;
- (id)deferralDate;
- (id)dependencies;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (long long)failureCount;
- (bool)finished;
- (bool)hasDependency:(id)arg1;
- (id)homeManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 userData:(id)arg2 backGroundOpsManager:(id)arg3 scheduledDate:(id)arg4 expirationDate:(id)arg5 dataSource:(id)arg6 dependentOperations:(id)arg7;
- (id)initWithUserData:(id)arg1;
- (id)initWithUserData:(id)arg1 dataSource:(id)arg2 backGroundOpsManager:(id)arg3;
- (bool)isDeferred;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isReadyToRun;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;
- (void)markOperationFinished;
- (id)operationUUID;
- (id)queue;
- (void)removeDependency:(id)arg1;
- (bool)runOperation:(id)arg1;
- (id)scheduledDate;
- (void)setBgOpsManager:(id)arg1;
- (void)setDeferralDate:(id)arg1;
- (void)setFailureCount:(long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIsExpired:(bool)arg1;
- (void)setIsReadyToRun:(bool)arg1;
- (id)userData;

@end
