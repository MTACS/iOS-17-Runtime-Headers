
@interface CDRichComplicationShapeView : UIView <CLKMonochromeComplicationView> {
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    long long  _filterStyle;
    UIView * _filterView;
    NSArray * _filteredGradientColors;
    CALayer * _freezeLayer;
    NSArray * _gradientColors;
    CAGradientLayer * _gradientLayer;
    NSArray * _gradientLocations;
    double  _monochromeFraction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    double  _progress;
    CAShapeLayer * _shapeLayer;
    bool  _willUnfreezeForTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, readonly) long long filterStyle;
@property (nonatomic, retain) NSArray *gradientColors;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPath { }*)_generatePath;
- (id)_normalizeGradientLocations:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (double)_shapeLineWidth;
- (id)_shapeStrokeColor;
- (bool)_shouldReverseGradient;
- (void)_updateGradient;
- (void)_updatePath;
- (id)device;
- (id)filterProvider;
- (long long)filterStyle;
- (id)gradientColors;
- (id)gradientLayer;
- (id)initForDevice:(id)arg1 withFilterStyle:(long long)arg2;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pointAtProgress:(float)arg1;
- (double)progress;
- (void)setFilterProvider:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)setProgress:(double)arg1;
- (id)shapeLayer;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)unfreezeForTransaction;
- (void)updateMonochromeColor;

@end
