
@interface SUCorePolicySoftwareUpdateDownload : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    bool  _allowsCellular;
    NSDictionary * _basePreflightOptions;
    bool  _disableUI;
    bool  _discretionary;
    int  _downloadTimeoutSecs;
    bool  _requiresInexpensiveAccess;
    bool  _requiresPowerPluggedIn;
    bool  _skipPhase;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic) bool allowsCellular;
@property (nonatomic, retain) NSDictionary *basePreflightOptions;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic) int downloadTimeoutSecs;
@property (nonatomic) bool requiresInexpensiveAccess;
@property (nonatomic) bool requiresPowerPluggedIn;
@property (nonatomic) bool skipPhase;
@property long long specifiedFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (bool)allowsCellular;
- (void)backToDefaultsWithSkipPhaseSet:(bool)arg1;
- (id)basePreflightOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableUI;
- (bool)discretionary;
- (int)downloadTimeoutSecs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkipPhaseSet:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresInexpensiveAccess;
- (bool)requiresPowerPluggedIn;
- (void)setAdditionalOptions:(id)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setBasePreflightOptions:(id)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadTimeoutSecs:(int)arg1;
- (void)setRequiresInexpensiveAccess:(bool)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setSkipPhase:(bool)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (bool)skipPhase;
- (long long)specifiedFields;
- (id)summary;

@end
