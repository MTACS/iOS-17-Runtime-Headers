
@interface SUCorePolicyDocumentationScan : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSDictionary * _additionalServerParams;
    bool  _allowsCellular;
    bool  _disableUI;
    bool  _discretionary;
    int  _downloadTimeoutSecs;
    bool  _liveServerCatalogOnly;
    bool  _requiresPowerPluggedIn;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSDictionary *additionalServerParams;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) bool liveServerCatalogOnly;
@property (nonatomic) bool requiresPowerPluggedIn;
@property long long specifiedFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (id)additionalServerParams;
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
- (bool)requiresPowerPluggedIn;
- (void)setAdditionalOptions:(id)arg1;
- (void)setAdditionalServerParams:(id)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadTimeoutSecs:(int)arg1;
- (void)setLiveServerCatalogOnly:(bool)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (long long)specifiedFields;
- (id)summary;

@end
