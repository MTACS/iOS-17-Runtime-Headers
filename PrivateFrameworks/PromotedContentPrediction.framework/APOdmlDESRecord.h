
@interface APOdmlDESRecord : NSObject {
    NSMutableDictionary * _adRecords;
    APOdmlSettings * _counterfactualOdmlSettings;
    NSDictionary * _deviceFeatures;
    unsigned long long  _placementType;
    NSMutableArray * _postWriteOperations;
    NSString * _recordID;
    NSUUID * _recordIdentifier;
    DESRecordStore * _recordStore;
    APOdmlSettings * _runtimeOdmlSettings;
    bool  _shouldMakeRecord;
    bool  _writingInProgress;
}

@property (nonatomic, retain) NSMutableDictionary *adRecords;
@property (nonatomic, retain) APOdmlSettings *counterfactualOdmlSettings;
@property (nonatomic, retain) NSDictionary *deviceFeatures;
@property (nonatomic) unsigned long long placementType;
@property (nonatomic, retain) NSMutableArray *postWriteOperations;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSUUID *recordIdentifier;
@property (nonatomic, retain) DESRecordStore *recordStore;
@property (nonatomic, retain) APOdmlSettings *runtimeOdmlSettings;
@property (nonatomic) bool shouldMakeRecord;
@property bool writingInProgress;

- (void).cxx_destruct;
- (id)adRecords;
- (void)addAdListToDES:(id)arg1;
- (void)commonInit:(id)arg1 placementType:(unsigned long long)arg2;
- (id)counterfactualOdmlSettings;
- (id)deviceFeatures;
- (id)dictionaryRepresentation;
- (id)featureForKey:(id)arg1 assetManagerType:(unsigned long long)arg2;
- (void)handleSaveCompletion:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithRecordID:(id)arg1 placementType:(unsigned long long)arg2;
- (id)onDeviceFeatures;
- (void)performAfterWrite:(id /* block */)arg1;
- (unsigned long long)placementType;
- (id)postWriteOperations;
- (id)recordData;
- (id)recordID;
- (id)recordIdentifier;
- (id)recordStore;
- (id)runtimeOdmlSettings;
- (void)saveDESRecord:(id)arg1 info:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAdRecords:(id)arg1;
- (void)setCounterfactualOdmlSettings:(id)arg1;
- (void)setDeviceFeatures:(id)arg1;
- (void)setPlacementType:(unsigned long long)arg1;
- (void)setPostWriteOperations:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRecordStore:(id)arg1;
- (void)setRuntimeOdmlSettings:(id)arg1;
- (void)setShouldMakeRecord:(bool)arg1;
- (void)setWritingInProgress:(bool)arg1;
- (bool)shouldMakeRecord;
- (void)updateAd:(id)arg1 event:(long long)arg2;
- (void)writeDESRecord:(id /* block */)arg1;
- (bool)writingInProgress;

@end
