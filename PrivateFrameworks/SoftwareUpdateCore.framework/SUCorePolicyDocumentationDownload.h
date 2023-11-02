
@interface SUCorePolicyDocumentationDownload : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    bool  _allowsCellular;
    bool  _disableUI;
    bool  _discretionary;
    int  _downloadTimeoutSecs;
    bool  _requiresInexpensiveAccess;
    bool  _requiresPowerPluggedIn;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) bool requiresInexpensiveAccess;
@property (nonatomic) bool requiresPowerPluggedIn;
@property long long specifiedFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
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
- (bool)requiresInexpensiveAccess;
- (bool)requiresPowerPluggedIn;
- (void)setAdditionalOptions:(id)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadTimeoutSecs:(int)arg1;
- (void)setRequiresInexpensiveAccess:(bool)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (long long)specifiedFields;
- (id)summary;

@end
