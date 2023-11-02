
@protocol PKPaletteTool <NSObject>

@required

- (PKToolConfiguration *)configuration;
- (<PKPaletteErasingTool> *)erasingTool;
- (<PKPaletteHandwritingTool> *)handwritingTool;
- (<PKPaletteInkingTool> *)inkingTool;
- (bool)isCustomTool;
- (bool)isErasingTool;
- (bool)isHandwritingTool;
- (bool)isInkingTool;
- (bool)isLassoTool;
- (bool)isRulerTool;
- (NSString *)toolIdentifier;
- (NSString *)toolVariant;

@end
