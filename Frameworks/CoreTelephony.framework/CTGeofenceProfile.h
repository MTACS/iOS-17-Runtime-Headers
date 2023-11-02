
@interface CTGeofenceProfile : NSObject <NSSecureCoding> {
    long long  _NRStandaloneMode;
    bool  _cellularDataPreferred;
    NSString * _dataSetName;
    bool  _enableNRStandalone;
    NSArray * _geofenceList;
    NSString * _versionNumber;
}

@property (nonatomic) long long NRStandaloneMode;
@property (nonatomic) bool cellularDataPreferred;
@property (nonatomic, retain) NSString *dataSetName;
@property (nonatomic) bool enableNRStandalone;
@property (nonatomic, retain) NSArray *geofenceList;
@property (nonatomic, retain) NSString *versionNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)NRStandaloneMode;
- (bool)cellularDataPreferred;
- (id)dataSetName;
- (id)description;
- (bool)enableNRStandalone;
- (void)encodeWithCoder:(id)arg1;
- (id)geofenceList;
- (id)initWithCoder:(id)arg1;
- (void)setCellularDataPreferred:(bool)arg1;
- (void)setDataSetName:(id)arg1;
- (void)setEnableNRStandalone:(bool)arg1;
- (void)setGeofenceList:(id)arg1;
- (void)setNRStandaloneMode:(long long)arg1;
- (void)setVersionNumber:(id)arg1;
- (id)versionNumber;

@end
