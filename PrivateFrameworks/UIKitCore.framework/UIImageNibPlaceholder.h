
@interface UIImageNibPlaceholder : UIImage <NSCoding> {
    NSString * _resourceCatalogName;
    long long  _resourceRenderingMode;
    UIImageSymbolConfiguration * _resourceSymbolImageConfiguration;
    double  _variableValue;
    NSString * runtimeResourceName;
    NSString * systemSymbolResourceName;
}

@property (nonatomic, copy) NSString *resourceCatalogName;
@property (nonatomic) long long resourceRenderingMode;
@property (nonatomic, copy) UIImageSymbolConfiguration *resourceSymbolImageConfiguration;
@property (nonatomic) double variableValue;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_initWithOtherImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 andRuntimeResourceName:(id)arg2;
- (id)initWithData:(id)arg1 andRuntimeResourceName:(id)arg2;
- (id)initWithRuntimeSystemSymbolResourceName:(id)arg1;
- (id)resourceCatalogName;
- (long long)resourceRenderingMode;
- (id)resourceSymbolImageConfiguration;
- (void)setResourceCatalogName:(id)arg1;
- (void)setResourceRenderingMode:(long long)arg1;
- (void)setResourceSymbolImageConfiguration:(id)arg1;
- (void)setVariableValue:(double)arg1;
- (double)variableValue;

@end
