
@interface NTKRichComplicationRectangularBaseView : CDRichComplicationTemplateView {
    <NTKRichComplicationRectangularBaseViewDelegate> * _delegate;
}

@property (nonatomic) <NTKRichComplicationRectangularBaseViewDelegate> *delegate;

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(bool)arg3;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (double)contentMargin;
- (id)delegate;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
