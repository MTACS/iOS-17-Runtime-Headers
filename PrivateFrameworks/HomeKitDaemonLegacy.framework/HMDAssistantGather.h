
@interface HMDAssistantGather : HMFObject <HMFLogging> {
    NSArray * _currentHomekitObjects;
    HMDHomeManager * _manager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSString *currentHomeAssistantIdentifier;
@property (nonatomic, readonly) NSString *currentHomeName;
@property (nonatomic, retain) NSArray *currentHomekitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long homeCount;
@property (nonatomic, readonly) NSArray *homeKitObjects;
@property (nonatomic) HMDHomeManager *manager;
@property (nonatomic, readonly) NSString *primaryHomeAssistantIdentifier;
@property (nonatomic, readonly) NSString *primaryHomeName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_gatherHomeKitObjects;
- (id)_getCurrentHome;
- (id)_getPrimaryHome;
- (id)currentHomeAssistantIdentifier;
- (id)currentHomeName;
- (id)currentHomekitObjects;
- (void)gatherHomeKitObjectsWithCompletion:(id /* block */)arg1;
- (void)getSyncEntityObjectsWithCompletionHandler:(id /* block */)arg1;
- (long long)homeCount;
- (id)homeKitObjects;
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;
- (id)manager;
- (id)primaryHomeAssistantIdentifier;
- (id)primaryHomeName;
- (void)setCurrentHomekitObjects:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
