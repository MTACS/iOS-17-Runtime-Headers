
@interface CSMagSafeAccessoryConfiguration : NSObject <CSDateTimeLayoutAggregating, CSPersistentContentLayoutProviding> {
    CSMagSafeRingConfiguration * _auxiliaryRing;
    CSLayoutStrategy * _layoutStrategy;
    CSMagSafeRingConfiguration * _ring;
    bool  _staticViewNeeded;
    double  _staticViewRingDiameter;
}

@property (nonatomic) CSMagSafeRingConfiguration *auxiliaryRing;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic) CSMagSafeRingConfiguration *ring;
@property (nonatomic) bool staticViewNeeded;
@property (nonatomic) double staticViewRingDiameter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleScreenCoordinatesForSleeve;

+ (id)batteryCaseConfiguration;
+ (id)configuration:(id)arg1 withBatteryPack:(bool)arg2;
+ (id)defaultConfiguration;
+ (id)staticViewConfiguration;

- (void).cxx_destruct;
- (id)auxiliaryRing;
- (double)bottomContentInset;
- (double)complicationContainerHeight;
- (bool)containsCenteredDateTimeLayout;
- (double)dateBaselineToComplicationY;
- (double)dateTimeMostExtremeLeadingX;
- (double)dateTimeMostExtremeTrailingX;
- (double)dateTimeSubtitleMaximumWidth;
- (id)initWithStaticViewNeeded:(bool)arg1;
- (id)layoutStrategy;
- (double)listMinY;
- (double)prominentBaselineToListY;
- (id)ring;
- (void)setAuxiliaryRing:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setRing:(id)arg1;
- (void)setStaticViewNeeded:(bool)arg1;
- (void)setStaticViewRingDiameter:(double)arg1;
- (bool)staticViewNeeded;
- (double)staticViewRingDiameter;
- (double)timeLabelBaselineY;
- (double)timeLabelOffsetForScrollPercent:(double)arg1;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScreenCoordinatesForSleeve;
- (double)windowedAccessoryInset;

@end
