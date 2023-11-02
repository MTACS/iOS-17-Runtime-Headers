
@interface CLKFullColorSymbolImageProvider : CLKFullColorImageProvider {
    bool  _finalized;
    bool  _ignoreHierarchicalLayers;
    NSNumber * _overridePointSize;
    NSNumber * _pointSize;
    NSString * _privateSystemName;
    UIColor * _secondaryTintColor;
    UIImage * _symbolImage;
    NSString * _systemName;
    long long  _weight;
}

@property (nonatomic) bool ignoreHierarchicalLayers;
@property (nonatomic, retain) NSNumber *overridePointSize;
@property (nonatomic, readonly) NSNumber *pointSize;
@property (nonatomic, retain) UIColor *secondaryTintColor;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) long long weight;

+ (id)_symbolImageProviderWithSystemName:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)symbolImageProviderWithSystemName:(id)arg1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithSystemName:(id)arg1;
- (bool)_isHierarchicalSymbol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createSymbolImage;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithPointSize:(id)arg1 weight:(long long)arg2 maxSDKSize:(struct CGSize { double x1; double x2; })arg3 maxDeviceSize:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5;
- (unsigned long long)hash;
- (bool)ignoreHierarchicalLayers;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)initWithSystemName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overridePointSize;
- (id)pointSize;
- (bool)prefersFilterOverTransition;
- (id)secondaryTintColor;
- (void)setIgnoreHierarchicalLayers:(bool)arg1;
- (void)setOverridePointSize:(id)arg1;
- (void)setSecondaryTintColor:(id)arg1;
- (id)systemName;
- (long long)weight;

@end
