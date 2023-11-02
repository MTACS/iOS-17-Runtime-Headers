
@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView> {
    NTKRichComplicationDialView * _backDial;
    NTKRichComplicationDialView * _frontDial;
    struct { 
        double stopwatchImageConfigPointSize; 
        double timeLabelFontSize; 
        double timeLabelMaxWidth; 
        double timeLabelBottom; 
        double dialDiameter; 
        struct CGSize { 
            double width; 
            double height; 
        } largeTickSize; 
        struct CGSize { 
            double width; 
            double height; 
        } smallTickSize; 
    }  _layoutConstants;
    bool  _showPlatter;
    UIImageView * _stopwatchImageView;
    CLKUIColoringLabel * _timeLabel;
    NSNumber * _updateToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (long long)_backgroundFilterStyle;
- (void)_editingDidEnd;
- (long long)_foregroundFilterStyle;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (double)_stopwatchCurrentTime;
- (void)_updateDialProgress;
- (void)dealloc;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)makeBackgroundTransparent;
- (bool)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
