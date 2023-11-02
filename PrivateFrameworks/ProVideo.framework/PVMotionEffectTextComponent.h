
@interface PVMotionEffectTextComponent : PVMotionEffectComponent <PVEffectTextual> {
    NSArray * _defaultAttributedStrings;
    NSNumber * _hasEmojiRenderingWorkaround;
    NSNumber * _isTitleCard;
    void * _textObjectIDs;
}

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (void).cxx_destruct;
- (void*)_textObjectIDs:(const void*)arg1;
- (void)beginEditingTextAtIndex:(unsigned int)arg1;
- (void)beginTextEditing;
- (void)dealloc;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (void)disableRenderingTextObjectAtIndex_NoLock:(unsigned int)arg1 documentInfo:(const void*)arg2;
- (void)effect:(id)arg1 updateProperties:(id)arg2 allProperties:(id)arg3;
- (void)enableRenderingTextObjectAtIndex_NoLock:(unsigned int)arg1 documentInfo:(const void*)arg2;
- (void)endEditingTextAtIndex:(unsigned int)arg1;
- (void)endTextEditing;
- (bool)hasEmojiRenderingWorkaround;
- (id)initWithMotionEffect:(id)arg1;
- (bool)isRightToLeftWithCurrentLocale;
- (bool)isTextFlipped;
- (bool)isTitleCard;
- (void)motionEffect:(id)arg1 didBecomeReady:(const void*)arg2 properties:(id)arg3;
- (bool)motionEffect:(id)arg1 propertiesDisableCache:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4;
- (bool)motionEffect:(id)arg1 shouldInvalidateCachedRenderForProperty:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)motionEffect:(id)arg1 willOpenMedia:(const void*)arg2 properties:(id)arg3;
- (void)motionEffectDidUnload:(id)arg1;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg1;
- (int)orientation;
- (void)resetDefaultStrings:(const void*)arg1;
- (void)setIsRightToLeft_NoLock:(bool)arg1 documentInfo:(const void*)arg2;
- (void)setupTitleParameters:(id)arg1 allProperties:(id)arg2 documentInfo:(const void*)arg3;
- (void)storeDefaultStrings:(const void*)arg1;
- (bool)supportsFlippingText;
- (bool)supportsOrientation;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })textCornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 index:(unsigned long long)arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 scale:(struct CGPoint { double x1; double x2; })arg5 viewSize:(struct CGSize { double x1; double x2; })arg6 viewOrigin:(int)arg7;
- (id)textEditingBounds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)textEditingBoundsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 useParagraphBounds:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (id)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (id)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;

@end
