
@interface SUCorePolicySoftwareUpdateScan : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSDictionary * _additionalServerParams;
    bool  _allowSameVersion;
    bool  _allowsCellular;
    bool  _disableUI;
    bool  _discretionary;
    int  _downloadTimeoutSecs;
    bool  _liveServerCatalogOnly;
    NSString * _rampingScanType;
    bool  _requiresPowerPluggedIn;
    bool  _restrictToFull;
    bool  _restrictToIncremental;
    long long  _scanUpdateType;
    NSString * _sessionId;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSDictionary *additionalServerParams;
@property (nonatomic) bool allowSameVersion;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) bool liveServerCatalogOnly;
@property (nonatomic, retain) NSString *rampingScanType;
@property (nonatomic) bool requiresPowerPluggedIn;
@property (nonatomic) bool restrictToFull;
@property (nonatomic) bool restrictToIncremental;
@property (nonatomic) long long scanUpdateType;
@property (nonatomic, retain) NSString *sessionId;
@property long long specifiedFields;

+ (id)nameForScanUpdateType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (id)additionalServerParams;
- (bool)allowSameVersion;
- (bool)allowsCellular;
- (void)backToDefaults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableUI;
- (bool)discretionary;
- (int)downloadTimeoutSecs;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)liveServerCatalogOnly;
- (id)rampingScanType;
- (bool)requiresPowerPluggedIn;
- (bool)restrictToFull;
- (bool)restrictToIncremental;
- (long long)scanUpdateType;
- (id)sessionId;
- (void)setAdditionalOptions:(id)arg1;
- (void)setAdditionalServerParams:(id)arg1;
- (void)setAllowSameVersion:(bool)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadTimeoutSecs:(int)arg1;
- (void)setLiveServerCatalogOnly:(bool)arg1;
- (void)setRampingScanType:(id)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setRestrictToFull:(bool)arg1;
- (void)setRestrictToIncremental:(bool)arg1;
- (void)setScanUpdateType:(long long)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (bool)shouldScanForMajorUpdates;
- (bool)shouldScanForMinorUpdates;
- (long long)specifiedFields;
- (id)summary;

@end
