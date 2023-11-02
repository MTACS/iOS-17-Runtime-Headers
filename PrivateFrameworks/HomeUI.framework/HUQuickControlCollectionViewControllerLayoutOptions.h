
@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject {
    double  _interitemSpacingForExtraSmallControlSize;
    double  _interitemSpacingForLargeControlSize;
    double  _interitemSpacingForRegularControlSize;
    double  _interitemSpacingForSmallControlSize;
    double  _minimumNavBarToControlsSpacing;
    double  _minimumSectionSpacing;
    double  _minimumSectionToSensorSectionSpacing;
    NSNumber * _overrideSizeSubclass;
    unsigned long long  _preferredLayoutStyle;
    double  _rowSpacing;
    double  _thermostatSectionSpacingOverride;
    unsigned long long  _titlePosition;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic) double interitemSpacingForExtraSmallControlSize;
@property (nonatomic) double interitemSpacingForLargeControlSize;
@property (nonatomic) double interitemSpacingForRegularControlSize;
@property (nonatomic) double interitemSpacingForSmallControlSize;
@property (nonatomic) double minimumNavBarToControlsSpacing;
@property (nonatomic) double minimumSectionSpacing;
@property (nonatomic) double minimumSectionToSensorSectionSpacing;
@property (nonatomic, retain) NSNumber *overrideSizeSubclass;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double thermostatSectionSpacingOverride;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (id)defaultOptions;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)initWithViewSize:(struct CGSize { double x1; double x2; })arg1;
- (double)interitemSpacingForExtraSmallControlSize;
- (double)interitemSpacingForLargeControlSize;
- (double)interitemSpacingForRegularControlSize;
- (double)interitemSpacingForSmallControlSize;
- (double)minimumNavBarToControlsSpacing;
- (double)minimumSectionSpacing;
- (double)minimumSectionToSensorSectionSpacing;
- (id)overrideSizeSubclass;
- (unsigned long long)preferredLayoutStyle;
- (double)rowSpacing;
- (void)setInteritemSpacingForExtraSmallControlSize:(double)arg1;
- (void)setInteritemSpacingForLargeControlSize:(double)arg1;
- (void)setInteritemSpacingForRegularControlSize:(double)arg1;
- (void)setInteritemSpacingForSmallControlSize:(double)arg1;
- (void)setMinimumNavBarToControlsSpacing:(double)arg1;
- (void)setMinimumSectionSpacing:(double)arg1;
- (void)setMinimumSectionToSensorSectionSpacing:(double)arg1;
- (void)setOverrideSizeSubclass:(id)arg1;
- (void)setPreferredLayoutStyle:(unsigned long long)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setThermostatSectionSpacingOverride:(double)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (double)thermostatSectionSpacingOverride;
- (unsigned long long)titlePosition;
- (struct CGSize { double x1; double x2; })viewSize;
- (long long)viewSizeSubclass;

@end
