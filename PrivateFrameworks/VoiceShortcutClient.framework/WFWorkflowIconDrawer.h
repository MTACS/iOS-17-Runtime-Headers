
@interface WFWorkflowIconDrawer : NSObject {
    WFColor * _backgroundColor;
    double  _cornerRadius;
    NSData * _customImageData;
    bool  _dark;
    bool  _drawBackground;
    bool  _drawGradient;
    bool  _drawShadowBehindGlyph;
    WFWorkflowIconDrawerContext * _drawerContext;
    unsigned short  _glyphCharacter;
    WFColor * _glyphColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _glyphSize;
    bool  _highContrast;
    bool  _outline;
    bool  _rounded;
    NSString * _symbolName;
    bool  _useCustomImage;
}

@property (nonatomic, retain) WFColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) NSData *customImageData;
@property (nonatomic) bool dark;
@property (nonatomic) bool drawBackground;
@property (nonatomic) bool drawGradient;
@property (nonatomic) bool drawShadowBehindGlyph;
@property (nonatomic, readonly) WFWorkflowIconDrawerContext *drawerContext;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic, retain) WFColor *glyphColor;
@property (nonatomic) struct CGSize { double x1; double x2; } glyphSize;
@property (nonatomic) bool highContrast;
@property (nonatomic) bool outline;
@property (nonatomic) bool rounded;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic) bool useCustomImage;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)glyphImageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 background:(bool)arg3;
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 padding:(struct CGSize { double x1; double x2; })arg4 glyphColor:(id)arg5 background:(bool)arg6;
+ (id)pngDataForImageWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })calculatedSizeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (double)cornerRadius;
- (id)customImageData;
- (bool)dark;
- (bool)drawBackground;
- (bool)drawGradient;
- (void)drawInContext:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)drawShadowBehindGlyph;
- (id)drawerContext;
- (unsigned short)glyphCharacter;
- (id)glyphColor;
- (struct CGSize { double x1; double x2; })glyphSize;
- (bool)highContrast;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 padding:(struct CGSize { double x1; double x2; })arg3;
- (id)init;
- (id)initWithDrawerContext:(id)arg1;
- (id)initWithIcon:(id)arg1;
- (id)initWithIcon:(id)arg1 drawerContext:(id)arg2;
- (bool)outline;
- (bool)rounded;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCustomImageData:(id)arg1;
- (void)setDark:(bool)arg1;
- (void)setDrawBackground:(bool)arg1;
- (void)setDrawGradient:(bool)arg1;
- (void)setDrawShadowBehindGlyph:(bool)arg1;
- (void)setGlyphCharacter:(unsigned short)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHighContrast:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setRounded:(bool)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setUseCustomImage:(bool)arg1;
- (id)symbolName;
- (bool)useCustomImage;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)initWithHomeScreenIcon:(id)arg1;

@end
