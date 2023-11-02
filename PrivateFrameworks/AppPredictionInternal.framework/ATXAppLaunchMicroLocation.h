
@interface ATXAppLaunchMicroLocation : NSObject {
    _ATXDuetHelper * _duetHelper;
    _PASLock * _lock;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)_getActionKeyCorrelationMatrix;
- (id)_getAppLaunchCorrelationMatrix;
- (id)_getHistoricalData;
- (bool)_loadCorrelationMatrices;
- (void)_receivedNotificationOfNewMicroLocation;
- (void)_subscribeToDKInsertionEvents;
- (void)_writeAppLaunchCorrelationMatrix:(id)arg1 actionKeyCorrelationMatrix:(id)arg2;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 directory:(id)arg2 forTesting:(bool)arg3;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)arg1;
- (double)popularityAtCurrentMicroLocationForApp:(id)arg1;
- (void)train;
- (void)tryLoadCorrelationMatricesImmediately;

@end
