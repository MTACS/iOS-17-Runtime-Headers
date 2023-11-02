
@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingAttributesViewControllerDelegate, PKPaletteErasingTool> {
    PKPaletteAttributeViewController * _attributeViewController;
    bool  _bitmapEraser;
}

@property (getter=isBitmapEraser, nonatomic) bool bitmapEraser;
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
@property (nonatomic, readonly) double weight;

- (void).cxx_destruct;
- (void)_updateAttributesViewController;
- (void)_updateAttributesViewControllerWeight;
- (id)attributeViewController;
- (void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1;
- (void)erasingAttributesViewControllerDidChangeInkThickness:(id)arg1;
- (id)initWithToolIdentifier:(id)arg1 variant:(id)arg2 configuration:(id)arg3;
- (bool)isBitmapEraser;
- (void)setBitmapEraser:(bool)arg1;
- (void)setToolProperties:(id)arg1;
- (void)setToolProperties:(id)arg1 updateUI:(bool)arg2;
- (id)toolIdentifier;
- (double)weight;

@end
