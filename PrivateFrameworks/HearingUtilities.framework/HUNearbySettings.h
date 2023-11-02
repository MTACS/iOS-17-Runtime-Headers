
@interface HUNearbySettings : HCSettings {
    NSMutableDictionary * _collectedData;
    NSObject<OS_dispatch_queue> * _saveQueue;
    AXDispatchTimer * _saveTimer;
}

@property (nonatomic, retain) NSMutableDictionary *collectedData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *saveQueue;
@property (nonatomic, retain) AXDispatchTimer *saveTimer;

+ (id)dateFromTimeStamp:(id)arg1;
+ (bool)isTimeStampExpired:(id)arg1;
+ (id)sharedInstance;
+ (id)timeStamp;

- (void).cxx_destruct;
- (void)addCollectedData:(id)arg1 toData:(id)arg2;
- (void)cleanUpExpiredAndSaveData:(id)arg1;
- (id)cleanUpExpiredFromSavedDomainData:(id)arg1;
- (id)collectedData;
- (id)extractMessageIDsFromMessage:(id)arg1;
- (id)init;
- (void)logMessage:(id)arg1;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (void)processAndSaveCollectedDataWithCompletion:(id /* block */)arg1;
- (void)processAndSaveCollectedTimeStamps;
- (void)saveCollectedDataWithCompletion:(id /* block */)arg1;
- (id)saveQueue;
- (id)saveTimer;
- (id)savedData;
- (void)sentIDSMessage:(id)arg1 domain:(id)arg2;
- (void)setCollectedData:(id)arg1;
- (void)setSaveQueue:(id)arg1;
- (void)setSaveTimer:(id)arg1;
- (bool)shouldStoreLocally;

@end
