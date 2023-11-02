
@interface MCCellularPrivateNetworkPayload : MCPayload {
    bool  _cellularDataPreferred;
    NSString * _dataSetName;
    NSNumber * _enableNRStandalone;
    NSArray * _geofenceList;
    NSString * _versionNumber;
}

@property (nonatomic) bool cellularDataPreferred;
@property (nonatomic, retain) NSString *dataSetName;
@property (nonatomic) NSNumber *enableNRStandalone;
@property (nonatomic, retain) NSArray *geofenceList;
@property (nonatomic, retain) NSString *versionNumber;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)_checkForValidContents:(id)arg1 outError:(id*)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;
- (bool)cellularDataPreferred;
- (id)dataSetName;
- (id)enableNRStandalone;
- (id)geofenceList;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setCellularDataPreferred:(bool)arg1;
- (void)setDataSetName:(id)arg1;
- (void)setEnableNRStandalone:(id)arg1;
- (void)setGeofenceList:(id)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)versionNumber;

@end
