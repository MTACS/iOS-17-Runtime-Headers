
@interface UIKBUndoStyling : NSObject {
    UIColor * _HUDShadowColor;
    UIColor * _HUDbackgroundColor;
    long long  _appearance;
    UIBlurEffect * _backgroundBlurEffect;
    UIVibrancyEffect * _backgroundVibrancyEffect;
    UIColor * _buttonGlyphColorDisabled;
    UIColor * _buttonGlyphColorEnabled;
    UIColor * _buttonGlyphColorPressed;
    double  _cutControlMinWidth;
    bool  _cutCopyPasteIconOnly;
    UIColor * _elementBackgroundColor;
    UIColor * _elementCoverColor;
    bool  _isRTL;
    bool  _tooSmallForInstructionalText;
    double  _undoControlMinWidth;
    bool  _undoRedoIconOnly;
}

@property (nonatomic, retain) UIColor *HUDShadowColor;
@property (nonatomic, retain) UIColor *HUDbackgroundColor;
@property (nonatomic) long long appearance;
@property (nonatomic, retain) UIBlurEffect *backgroundBlurEffect;
@property (nonatomic, retain) UIVibrancyEffect *backgroundVibrancyEffect;
@property (nonatomic, retain) UIColor *buttonGlyphColorDisabled;
@property (nonatomic, retain) UIColor *buttonGlyphColorEnabled;
@property (nonatomic, retain) UIColor *buttonGlyphColorPressed;
@property (nonatomic) double cutControlMinWidth;
@property (nonatomic) bool cutCopyPasteIconOnly;
@property (nonatomic, retain) UIColor *elementBackgroundColor;
@property (nonatomic, retain) UIColor *elementCoverColor;
@property (nonatomic) bool isRTL;
@property (nonatomic) bool tooSmallForInstructionalText;
@property (nonatomic) double undoControlMinWidth;
@property (nonatomic, readonly) UIFont *undoInteractiveControlLabelFont;
@property (nonatomic) bool undoRedoIconOnly;
@property (nonatomic, readonly) UIFont *undoStateControlLabelFont;
@property (nonatomic, readonly) UIFont *undoStateControlUnavailableLabelFont;

- (void).cxx_destruct;
- (id)HUDShadowColor;
- (id)HUDbackgroundColor;
- (long long)appearance;
- (id)backgroundBlurEffect;
- (id)backgroundVibrancyEffect;
- (id)buttonGlyphColorDisabled;
- (id)buttonGlyphColorEnabled;
- (id)buttonGlyphColorPressed;
- (void)createDynamicColors;
- (double)cutControlMinWidth;
- (bool)cutCopyPasteIconOnly;
- (id)elementBackgroundColor;
- (id)elementCoverColor;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(bool)arg2;
- (bool)isRTL;
- (void)setAppearance:(long long)arg1;
- (void)setBackgroundBlurEffect:(id)arg1;
- (void)setBackgroundVibrancyEffect:(id)arg1;
- (void)setButtonGlyphColorDisabled:(id)arg1;
- (void)setButtonGlyphColorEnabled:(id)arg1;
- (void)setButtonGlyphColorPressed:(id)arg1;
- (void)setCutControlMinWidth:(double)arg1;
- (void)setCutCopyPasteIconOnly:(bool)arg1;
- (void)setElementBackgroundColor:(id)arg1;
- (void)setElementCoverColor:(id)arg1;
- (void)setHUDShadowColor:(id)arg1;
- (void)setHUDbackgroundColor:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setTooSmallForInstructionalText:(bool)arg1;
- (void)setUndoControlMinWidth:(double)arg1;
- (void)setUndoRedoIconOnly:(bool)arg1;
- (bool)tooSmallForInstructionalText;
- (double)undoControlMinWidth;
- (id)undoInteractiveControlLabelFont;
- (bool)undoRedoIconOnly;
- (id)undoStateControlLabelFont;
- (id)undoStateControlUnavailableLabelFont;
- (id)vibrancyEffectForBlur:(id)arg1;

@end
