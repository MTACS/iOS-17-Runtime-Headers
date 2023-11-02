
@interface ADMetricManager : NSObject {
    NSMutableDictionary * _activeAdvertisementsByInstanceID;
    ADCapService * _capService;
    NSMutableSet * _clickCapUpdated;
    ADDESRecordsManager * _desRecordManager;
    NSMutableSet * _downloadCapUpdated;
    NSMutableSet * _frequencyCapUpdated;
}

@property (nonatomic, retain) NSMutableDictionary *activeAdvertisementsByInstanceID;
@property (nonatomic, retain) ADCapService *capService;
@property (nonatomic, retain) NSMutableSet *clickCapUpdated;
@property (nonatomic, retain) ADDESRecordsManager *desRecordManager;
@property (nonatomic, retain) NSMutableSet *downloadCapUpdated;
@property (nonatomic, retain) NSMutableSet *frequencyCapUpdated;

+ (id)sharedInstance;
+ (id)testInstance;

- (void).cxx_destruct;
- (void)activateAdvertisements:(id)arg1;
- (id)activeAdvertisementsByInstanceID;
- (void)adMarkerInteracted:(id)arg1;
- (long long)buttonStateToDownloadType:(long long)arg1;
- (id)buttonStateToString:(long long)arg1;
- (id)capService;
- (id)clickCapUpdated;
- (void)completed:(id)arg1;
- (void)deactivateAdvertisements:(id)arg1;
- (void)deactivateAdvertisementsByInstanceIDs:(id)arg1;
- (void)deactivateAllAdvertisements;
- (id)desRecordManager;
- (id)downloadCapUpdated;
- (id)frequencyCapTypeToString:(long long)arg1;
- (id)frequencyCapUpdated;
- (void)getApp:(id)arg1 buttonState:(long long)arg2 completion:(id /* block */)arg3;
- (void)getApp:(id)arg1 buttonState:(long long)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (void)interacted:(id)arg1;
- (void)offScreen:(id)arg1;
- (void)onScreen:(id)arg1;
- (void)placed:(id)arg1;
- (void)received:(id)arg1;
- (void)replaceCapService:(id)arg1;
- (void)setActiveAdvertisementsByInstanceID:(id)arg1;
- (void)setCapService:(id)arg1;
- (void)setClickCapUpdated:(id)arg1;
- (void)setDesRecordManager:(id)arg1;
- (void)setDownloadCapUpdated:(id)arg1;
- (void)setFrequencyCapUpdated:(id)arg1;
- (void)updateClickCap:(id)arg1 targetAdvertisement:(id)arg2;
- (void)updateStoreKitAttribution:(id)arg1 targetAdvertisement:(id)arg2;
- (void)visible:(id)arg1 start:(id)arg2 duration:(double)arg3;

@end
