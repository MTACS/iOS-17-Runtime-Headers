
@interface HMDPowerLogObserverContext : NSObject {
    HMMIntervalMapper * _cameraConfigurationEventHistogram;
    HMMIntervalMapper * _homeConfigurationEventHistogram;
    <HMMLogEventDispatching> * _logEventDispatcher;
    HMFPowerLogger * _powerLogger;
}

@property (nonatomic, readonly) HMMIntervalMapper *cameraConfigurationEventHistogram;
@property (nonatomic, readonly) HMMIntervalMapper *homeConfigurationEventHistogram;
@property (nonatomic, readonly) <HMMLogEventDispatching> *logEventDispatcher;
@property (nonatomic, readonly) HMFPowerLogger *powerLogger;

- (void).cxx_destruct;
- (id)cameraConfigurationEventHistogram;
- (id)homeConfigurationEventHistogram;
- (id)initWithLogEventDispatcher:(id)arg1 powerLogger:(id)arg2;
- (id)logEventDispatcher;
- (id)powerLogger;

@end
