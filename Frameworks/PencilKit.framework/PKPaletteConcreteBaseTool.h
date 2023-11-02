
@interface PKPaletteConcreteBaseTool : NSObject <PKPaletteTool> {
    PKToolConfiguration * _cachedConfiguration;
    NSString * _toolVariant;
}

@property (nonatomic, readonly) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKPaletteErasingTool> *erasingTool;
@property (nonatomic, readonly) <PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *toolIdentifier;
@property (nonatomic, readonly) NSString *toolVariant;

- (void).cxx_destruct;
- (id)configuration;
- (id)erasingTool;
- (id)handwritingTool;
- (id)inkingTool;
- (bool)isCustomTool;
- (bool)isErasingTool;
- (bool)isHandwritingTool;
- (bool)isInkingTool;
- (bool)isLassoTool;
- (bool)isRulerTool;
- (id)toolIdentifier;
- (id)toolVariant;

@end
