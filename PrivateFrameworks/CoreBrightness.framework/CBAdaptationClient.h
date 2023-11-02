
@interface CBAdaptationClient : NSObject {
    NSObject<OS_os_log> * _logHandle;
    int  _mode;
    bool  _modeSet;
    id /* block */  _notificationBlock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    bool  _supported;
    BrightnessSystemClient * bsc;
    bool  ownsClient;
}

@property bool supported;

+ (bool)supportsAdaptation;

- (bool)animateFromWeakestAdaptationModeInArray:(int*)arg1 withLength:(int)arg2 toWeakestInArray:(int*)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (bool)available;
- (void)dealloc;
- (int)getAdaptationMode;
- (bool)getEnabled;
- (bool)getStrengths:(float*)arg1 nStrengths:(int)arg2;
- (void)handleBrightnessSystemNotificationForKey:(id)arg1 withValue:(id)arg2;
- (id)init;
- (id)initWithClientObj:(id)arg1;
- (bool)overrideStrengths:(float*)arg1 forModes:(int*)arg2 nModes:(int)arg3;
- (bool)registerNotificationCallbackBlock:(id /* block */)arg1 withQueue:(id)arg2;
- (bool)registerNotificationForType:(unsigned long long)arg1;
- (bool)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (bool)setEnabled:(bool)arg1;
- (void)setSupported:(bool)arg1;
- (bool)setWeakestAdaptationModeFromArray:(int*)arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (bool)supported;
- (void)unregisterNotificationCallbackBlock;
- (void)unregisterNotificationForType:(unsigned long long)arg1;

@end
