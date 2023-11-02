
@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable * mDrawable;
    bool  mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;

- (void).cxx_destruct;
- (void)checkForFloating:(id)arg1;
- (void)clearDrawable;
- (id)description;
- (id)drawable;
- (id)imageBlipRef;
- (id)imageData;
- (id)imageName;
- (id)initWithParagraph:(id)arg1;
- (bool)isDrawableOverridden;
- (bool)isFloating;
- (id)overrideDrawable;
- (void)propagateTextTypeToDrawables;
- (int)runType;
- (void)setDrawable:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setImageBlipRef:(id)arg1;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;

@end
