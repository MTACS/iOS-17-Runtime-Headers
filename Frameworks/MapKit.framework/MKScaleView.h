
@interface MKScaleView : UIView {
    UIVisualEffectView * _blurredSegment;
    UIColor * _borderColorRegular;
    UIColor * _borderColorSatellite;
    unsigned long long  _controlSize;
    UIView * _displayedOutline;
    UIView * _displayedWhiteOutline;
    double  _distanceInMeters;
    NSString * _feetAbbreviation;
    NSNumberFormatter * _floatNumberFormatter;
    double  _fontSize;
    NSMutableDictionary * _formattedNumberCache;
    long long  _grQuality;
    bool  _isVisible;
    NSString * _kilometersAbbreviation;
    int  _layoutCounter;
    long long  _legendAlignment;
    double  _legendMarginBottom;
    double  _legendMarginLeft;
    double  _legendUnitsSpacing;
    double  _magicNumbers;
    unsigned long long  _mapType;
    MKMapView * _mapView;
    NSString * _metersAbbreviation;
    NSString * _milesAbbreviation;
    long long  _oldNumberOfSegments;
    double  _resultSegmentLength;
    double  _resultSegmentLengthInMeters;
    long long  _scaleVisibility;
    double  _segmentBorderWidth;
    double  _segmentLengthInPixels;
    double  _segmentThickness;
    NSMutableArray * _segments;
    double  _unitsFrameHeight;
    _MKScaleUnitsView * _unitsView;
    NSNumber * _useLightText;
    bool  _useMetric;
    bool  _useYardsForShortDistances;
    bool  _usedInternallyByMapView;
    NSString * _yardAbbreviation;
}

@property (getter=_controlSize, setter=_setControlSize:, nonatomic) unsigned long long controlSize;
@property (nonatomic) double distanceInMeters;
@property (nonatomic) long long legendAlignment;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) bool useLightText;
@property (nonatomic) bool usedInternallyByMapView;

+ (id)scaleViewWithMapView:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateSegments;
- (unsigned long long)_controlSize;
- (id)_formattedStringForFloat:(double)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(bool)arg3 inMetric:(bool)arg4 displaysYardsForShortDistances:(bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (void)_setControlSize:(unsigned long long)arg1;
- (id)_setupOutlineView;
- (id)_setupSegmentView:(bool)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)_updateStrings;
- (void)_updateVisibility;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)legendAlignment;
- (unsigned long long)mapType;
- (id)mapView;
- (void)memoryWarning:(id)arg1;
- (long long)scaleVisibility;
- (void)setDistanceInMeters:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendAlignment:(long long)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setMapView:(id)arg1;
- (void)setScaleVisibility:(long long)arg1;
- (void)setUseLightText:(bool)arg1;
- (void)setUsedInternallyByMapView:(bool)arg1;
- (void)shouldUpdateScaleNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLocale:(id)arg1;
- (void)updateMetrics;
- (bool)useLightText;
- (bool)usedInternallyByMapView;

@end