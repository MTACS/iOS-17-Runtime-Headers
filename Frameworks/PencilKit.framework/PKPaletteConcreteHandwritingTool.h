
@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool> {
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKPaletteErasingTool> *erasingTool;
@property (nonatomic, readonly) <PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKPaletteInkingTool> *inkingTool;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *toolIdentifier;
@property (nonatomic, readonly) NSString *toolVariant;

- (void).cxx_destruct;
- (bool)isHandwritingTool;
- (id)localeIdentifier;
- (void)setLocaleIdentifier:(id)arg1;
- (id)toolIdentifier;

@end
