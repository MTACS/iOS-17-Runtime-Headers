
@interface NWCWindObservationsBaseView : UIView <CLKFullColorImageView> {
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    UILabel * _windDirectionAbbreviationLabel;
    UILabel * _windSpeedLabel;
    UILabel * _windUnitLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *windDirectionAbbreviationLabel;
@property (nonatomic, retain) UILabel *windSpeedLabel;
@property (nonatomic, retain) UILabel *windUnitLabel;

- (void).cxx_destruct;
- (void)_applyConstraintsWithLayoutConstants:(struct { double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)_processWindSpeed:(id)arg1 unit:(id)arg2 directionAbbreviation:(id)arg3;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)device;
- (id)filterProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setDevice:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setWindDirectionAbbreviationLabel:(id)arg1;
- (void)setWindSpeedLabel:(id)arg1;
- (void)setWindUnitLabel:(id)arg1;
- (long long)supportedComplicationFamily;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)windDirectionAbbreviationLabel;
- (id)windSpeedLabel;
- (id)windUnitLabel;

@end
