
@interface CLServiceVendor : NSObject {
    NSMutableDictionary * _catalog;
    double  _currentGlobalLatchedAbsoluteTimestamp;
    int  _missBehavior;
    NSMutableDictionary * _recordingFromTriggersByTo;
    NSMutableDictionary * _recordingToTriggersByFrom;
    NSDictionary * _serviceReplacementMap;
    NSMutableSet * _timeCoercibleSilos;
    NSMutableSet * _unavailableServiceNames;
}

+ (void)initialize;
+ (void)rereadConfiguration:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)amendServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;
- (void)dealloc;
- (void)enableTimeCoercion;
- (bool)ensureServiceIsRunning:(id)arg1;
- (id)getServiceWithName:(id)arg1;
- (id)init;
- (void)intendToSyncServiceWithName:(id)arg1;
- (bool)isServiceEnabled:(id)arg1;
- (bool)isServiceRunning:(id)arg1;
- (bool)isTimeCoercionEnabled;
- (int)missBehavior;
- (id)proxyForService:(id)arg1;
- (id)proxyForService:(id)arg1 forClient:(id)arg2;
- (void)retireServiceWithName:(id)arg1;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)arg1;
- (id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2;
- (void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;

@end
