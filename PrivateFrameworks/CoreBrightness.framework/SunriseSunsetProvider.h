
@interface SunriseSunsetProvider : NSObject {
    id /* block */  _callbackBlock;
    id /* block */  _duetCallback;
    _CDClientContext * _duetContextStore;
    NSObject<OS_dispatch_semaphore> * _duetDispatchSemaphore;
    NSDictionary * _duetInfo;
    _CDContextualKeyPath * _duetKeyPath;
    _CDContextualChangeRegistration * _duetRegistration;
    int  _logLevel;
    _CDContextualPredicate * _predicate;
    bool  _sunriseSunsetNotificationEnabled;
}

@property int logLevel;

- (void)cancel;
- (id)copySunriseSunsetInfo:(int)arg1;
- (id)copySunsetSunriseInfoFromContext;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1;
- (int)logLevel;
- (void)registerBlock:(id /* block */)arg1;
- (void)setLogLevel:(int)arg1;
- (void)unregisterBlock;
- (void)unregisterNotification;
- (void)updateSunriseSunsetInfo;

@end
