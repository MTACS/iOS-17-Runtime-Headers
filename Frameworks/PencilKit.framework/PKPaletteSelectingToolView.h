
@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool> {
    <PKPaletteInkingTool> * _inkTool;
}

@property (nonatomic, readonly) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKPaletteErasingTool> *erasingTool;
@property (nonatomic, readonly) <PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKInk *ink;
@property (nonatomic, retain) <PKPaletteInkingTool> *inkTool;
@property (nonatomic, readonly) <PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *toolIdentifier;
@property (nonatomic, readonly) NSString *toolVariant;

- (void).cxx_destruct;
- (id)attributeViewController;
- (id)initWithToolIdentifier:(id)arg1 configuration:(id)arg2;
- (id)ink;
- (id)inkTool;
- (void)setInkColor:(id)arg1;
- (void)setInkTool:(id)arg1;
- (void)setInkWeight:(double)arg1;
- (void)setSelected:(bool)arg1;

@end
