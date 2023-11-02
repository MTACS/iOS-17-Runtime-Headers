
@interface CLKSymbolImageProvider : CLKImageProvider {
    bool  _finalized;
    bool  _hierarchicalSymbol;
    bool  _ignoreHierarchicalLayers;
    NSNumber * _overridePointSize;
    NSNumber * _pointSize;
    NSString * _privateSystemName;
    UIColor * _secondaryTintColor;
    NSString * _systemName;
    long long  _weight;
}

@property (nonatomic) bool ignoreHierarchicalLayers;
@property (nonatomic, readonly) bool isTwoPiece;
@property (nonatomic, retain) NSNumber *overridePointSize;
@property (nonatomic, readonly) NSNumber *pointSize;
@property (nonatomic, retain) UIColor *secondaryTintColor;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) long long weight;

+ (id)_symbolImageProviderWithSystemName:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)symbolImageProviderWithSystemName:(id)arg1;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_configuration;
- (id)_createSymbolImageWithConfiguration:(id)arg1;
- (id)_createSymbolImageWithForeground:(id)arg1 background:(id)arg2;
- (id)_initWithSystemName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createSymbolImage;
- (id)createSymbolImageForType:(long long)arg1 color:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithPointSize:(id)arg1 weight:(long long)arg2 maxSDKSize:(struct CGSize { double x1; double x2; })arg3 maxDeviceSize:(struct CGSize { double x1; double x2; })arg4 cornerRadius:(double)arg5;
- (void)finalizeWithPointSize:(id)arg1 weight:(long long)arg2 maxSDKSize:(struct CGSize { double x1; double x2; })arg3 maxDeviceSize:(struct CGSize { double x1; double x2; })arg4 maskToCircle:(bool)arg5;
- (unsigned long long)hash;
- (bool)ignoreHierarchicalLayers;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)initWithSystemName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTwoPiece;
- (id)overridePointSize;
- (id)pointSize;
- (id)secondaryTintColor;
- (void)setIgnoreHierarchicalLayers:(bool)arg1;
- (void)setOverridePointSize:(id)arg1;
- (void)setSecondaryTintColor:(id)arg1;
- (id)systemName;
- (long long)weight;

@end
