
@interface HMAccessoryBrowser : NSObject <HMFLogging, HMFMessageReceiver> {
    HMMutableArray * _accessories;
    bool  _browsing;
    _HMContext * _context;
    <HMAccessoryBrowserDelegate> * _delegate;
    unsigned long long  _generationCounter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _uuid;
}

@property (nonatomic, retain) HMMutableArray *accessories;
@property (getter=isBrowsing, nonatomic) bool browsing;
@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *discoveredAccessories;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)logCategory;
+ (id)unconfigureQueue;

- (void).cxx_destruct;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_startSearchingForNewAccessories;
- (void)_stopSearchingForNewAccessoriesWithError:(id)arg1;
- (void)_updateNewAccessories:(id)arg1;
- (id)accessories;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)discoveredAccessories;
- (unsigned long long)generationCounter;
- (void)handleStartWithError:(id)arg1 response:(id)arg2;
- (id)init;
- (bool)isBrowsing;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setAccessories:(id)arg1;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (void)stopSearchingForNewAccessoriesWithError:(id)arg1;
- (id)uuid;

@end
