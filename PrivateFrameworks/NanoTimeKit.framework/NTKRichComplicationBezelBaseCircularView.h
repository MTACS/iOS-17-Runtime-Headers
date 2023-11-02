
@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView <CDComplicationDisplayObserver, NTKRichComplicationCircularBezelView> {
    bool  _allowNofityingDelegateWithBezelTextUpdate;
    bool  _allowUpdatingBezelTextProperties;
    double  _bezelLabelCircularRadius;
    CLKUICurvedColoringLabel * _bezelTextLabel;
    double  _bezelTextLabelRotationInDegree;
    CDRichComplicationTemplateView * _circularView;
    double  _circularViewRotationInDegree;
    long long  _fromTheme;
    double  _inMonochromeModeFraction;
    double  _newDataAnimationBezelLabelScale;
    double  _newDataAnimationCircularScale;
    double  _themeFraction;
    long long  _toTheme;
}

@property (nonatomic) double bezelLabelCircularRadius;
@property (nonatomic, readonly) CDRichComplicationView *circularView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(id /* block */)arg7;

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (id)_bezelTextProviderFromTemplate:(id)arg1;
- (id)_circularTemplateFromTemplate:(id)arg1;
- (Class)_circularViewClassFromFromTemplate:(id)arg1;
- (void)_createBezelLabel;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_layoutBezelLabel;
- (void)_layoutCircularView;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_transitToHighlightState:(bool)arg1 fraction:(double)arg2;
- (void)_updateNewDataAnimationFinalAlpha:(double)arg1 finalBezelLabelScale:(double)arg2 finalCircularViewScale:(double)arg3 animationApplierBlock:(id /* block */)arg4 animationFraction:(float)arg5;
- (double)bezelLabelCircularRadius;
- (double)bezelTextRadius;
- (id)circularView;
- (struct CGPoint { double x1; double x2; })circularViewCenter;
- (void)complicationDisplay:(id)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (id)description;
- (id)init;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)setBezelLabelCircularRadius:(double)arg1;
- (void)setBezelTextColor:(id)arg1;
- (void)setBezelTextRadius:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
