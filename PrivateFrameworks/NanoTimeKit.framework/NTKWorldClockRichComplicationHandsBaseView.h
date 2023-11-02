
@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView> {
    <CLKMonochromeFilterProvider> * _filterProvider;
    struct { 
        double pegDotDiameter; 
        CLKUIAnalogHandConfiguration *hourHandConfig; 
        CLKUIAnalogHandConfiguration *minuteHandConfig; 
    }  _layoutConstants;
    bool  _showGossamerUI;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayedHour;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *pegDotColor;
@property (readonly) Class superclass;

+ (bool)showsSecondHand;

- (void).cxx_destruct;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (long long)complicationFamily;
- (id)createSecondHandView;
- (long long)displayedHour;
- (id)filterProvider;
- (id)hourHandConfiguration;
- (id)initForDevice:(id)arg1;
- (void)layoutHandViews;
- (id)minuteHandConfiguration;
- (id)pegDotColor;
- (id)secondHandConfiguration;
- (void)setFilterProvider:(id)arg1;
- (void)setPegDotColor:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
