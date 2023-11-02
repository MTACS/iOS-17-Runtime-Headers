
@interface _UISceneOpenItemProvidersDataTransferSessionManager : NSObject <_UISceneOpenItemProvidersDataTransferSessionDelegate> {
    NSMutableSet * _sessions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *sessions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addSession:(id)arg1;
- (void)dataTransferSessionBeganTransfers:(id)arg1;
- (void)dataTransferSessionFinishedTransfers:(id)arg1;
- (id)init;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
