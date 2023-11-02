
@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel {
    HKHeartRateSummary * _mostRecentHeartRateSummary;
}

@property (nonatomic, retain) HKHeartRateSummary *mostRecentHeartRateSummary;

- (void).cxx_destruct;
- (void)manager:(id)arg1 receivedLatestHeartRateSummary:(id)arg2;
- (id)mostRecentHeartRateSummary;
- (void)setMostRecentHeartRateSummary:(id)arg1;

@end
