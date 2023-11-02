
@interface CPSRouteEstimatesView : UIView {
    CPSLabeledValueView * _arrivalTimeView;
    CPSLabeledValueView * _distanceRemainingView;
    unsigned long long  _timeRemainingColor;
    CPSLabeledValueView * _timeRemainingView;
    CPSTravelEstimatesStringFormatter * _travelEstimatesStringFormatter;
}

@property (nonatomic, readonly) CPSLabeledValueView *arrivalTimeView;
@property (nonatomic, copy) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) CPSLabeledValueView *distanceRemainingView;
@property (nonatomic) unsigned long long timeRemainingColor;
@property (nonatomic, readonly) CPSLabeledValueView *timeRemainingView;
@property (nonatomic, readonly) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter;

- (void).cxx_destruct;
- (void)_updateTextColors;
- (id)arrivalTimeView;
- (id)arrivalTimeZone;
- (id)distanceRemainingView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setArrivalTimeZone:(id)arg1;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setTimeRemainingColor:(unsigned long long)arg1;
- (void)setTripEstimateStyle:(unsigned long long)arg1;
- (unsigned long long)timeRemainingColor;
- (id)timeRemainingView;
- (id)travelEstimatesStringFormatter;

@end
