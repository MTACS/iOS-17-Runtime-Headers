
@interface HMMSiriSELFLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    <HMMSiriSELFAnalyticsStream> * _siriAnalyticsStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMSiriSELFAnalyticsStream> *siriAnalyticsStream;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithSiriAnalyticsStream:(id)arg1 logEventDispatcher:(id)arg2;
- (id)siriAnalyticsStream;

@end
