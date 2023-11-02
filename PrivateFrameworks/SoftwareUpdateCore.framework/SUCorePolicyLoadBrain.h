
@interface SUCorePolicyLoadBrain : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    bool  _allowsCellular;
    bool  _disableUI;
    bool  _discretionary;
    bool  _liveServerCatalogOnly;
    bool  _skipPhase;
    long long  _specifiedFields;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic) bool allowsCellular;
@property (nonatomic) bool disableUI;
@property (nonatomic) bool discretionary;
@property (nonatomic) bool liveServerCatalogOnly;
@property (nonatomic) bool skipPhase;
@property long long specifiedFields;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (bool)allowsCellular;
- (void)backToDefaultsWithSkipPhaseSet:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableUI;
- (bool)discretionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkipPhaseSet:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)liveServerCatalogOnly;
- (void)setAdditionalOptions:(id)arg1;
- (void)setAllowsCellular:(bool)arg1;
- (void)setDisableUI:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setLiveServerCatalogOnly:(bool)arg1;
- (void)setSkipPhase:(bool)arg1;
- (void)setSpecifiedFields:(long long)arg1;
- (bool)skipPhase;
- (long long)specifiedFields;
- (id)summary;

@end
