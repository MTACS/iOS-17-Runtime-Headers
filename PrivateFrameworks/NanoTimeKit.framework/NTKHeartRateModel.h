
@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver> {
    <NTKHeartRateModelDelegate> * _delegate;
    HKQuantitySample * _mostRecentHeartRate;
}

@property (nonatomic, readonly) <NTKHeartRateModelDelegate> *delegate;
@property (nonatomic, retain) HKQuantitySample *mostRecentHeartRate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2;
- (id)mostRecentHeartRate;
- (void)setMostRecentHeartRate:(id)arg1;

@end
