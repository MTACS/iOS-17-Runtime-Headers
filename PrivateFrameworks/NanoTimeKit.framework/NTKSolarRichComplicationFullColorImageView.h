
@interface NTKSolarRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {
    UIView * _backgroundView;
    CALayer * _belowHorizonLayer;
    CLKClockTimerToken * _clockTimerToken;
    CLKDevice * _device;
    UIView * _fillDiskHaloContainerView;
    CALayer * _fillDiskHaloLayer;
    CALayer * _fillDiskLayer;
    <CLKMonochromeFilterProvider> * _filterProvider;
    CALayer * _gradientAdjustmentLayer;
    CAGradientLayer * _gradientLayer;
    double  _horizonYInCurve;
    struct { 
        double complicationContentDiameter; 
        double curveLineWidth; 
        struct CGSize { 
            double width; 
            double height; 
        } curveMaxSize; 
        double lineTop; 
        double lineHeight; 
        double strokeDiskDiameter; 
        double strokeDiskBorderWidth; 
        double fillDiskDiameter; 
        double haloMinScale; 
        double haloMaxScale; 
        double backgroundGradientSunsetLayerMaxAlpha; 
    }  _layoutConstants;
    UIView * _lineView;
    CLLocation * _location;
    NTKBezierPathView * _pathView;
    bool  _paused;
    NTKBezierPathPointModel * _pointModel;
    double  _prevDiskTimePercentage;
    NTKSolarPath * _solarPath;
    bool  _solarPathNeedsUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _solarPathViewRect;
    NTKSolarTimeModel * _solarTimeModel;
    CALayer * _strokeDiskBorderLayer;
    CALayer * _strokeDiskMaskLayer;
    double  _sunsetXInCurve;
    NSDate * _timeTravelDate;
    bool  _usingIdealizedTime;
    NSDictionary * _waypoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timeTravelDate;
@property (nonatomic, readonly) bool usingIdealizedTime;

- (void).cxx_destruct;
- (void)_dateDidUpdate;
- (void)_didReceiveSignificantTimeChangeNotification;
- (void)_didReceiveTimeZoneDidChangeNotification;
- (void)_setSolarPathNeedsUpdate;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateGradientBackgroundWithYPosition:(double)arg1 xPercentage:(double)arg2 topDistanceAboveHorizonLine:(double)arg3 bottomDistanceBelowHorizonLine:(double)arg4;
- (void)_updateSolarDiskWithUsingIdealizedTime:(bool)arg1 forceUpdate:(bool)arg2 animated:(bool)arg3;
- (void)_updateSolarPathWithAnimated:(bool)arg1;
- (void)_updateWaypoints;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)dealloc;
- (id)filterProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (id)initFullColorImageViewWithDevice:(id)arg1 family:(long long)arg2;
- (void)layoutSubviews;
- (id)location;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setFilterProvider:(id)arg1;
- (void)setTimeTravelDate:(id)arg1;
- (id)timeTravelDate;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateWithLocation:(id)arg1 useIdealizedTime:(bool)arg2 forceUpdate:(bool)arg3 animated:(bool)arg4;
- (bool)usingIdealizedTime;

@end
