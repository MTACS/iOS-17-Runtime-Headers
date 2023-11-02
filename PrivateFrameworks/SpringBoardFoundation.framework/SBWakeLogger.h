
@interface SBWakeLogger : NSObject {
    long long  _activeWakeLoggerSource;
    unsigned int  _backlightService;
    long long  _homeButtonType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _timesyncService;
    bool  _trackingWake;
    NSMutableDictionary * _wakeSouceToEventDict;
}

@property (nonatomic) long long activeWakeLoggerSource;
@property (nonatomic, readonly, copy) NSString *activeWakeSourceDescription;
@property (nonatomic) unsigned int backlightService;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned int timesyncService;
@property (nonatomic) bool trackingWake;
@property (nonatomic, retain) NSMutableDictionary *wakeSouceToEventDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_lock_wakeDidBegin:(long long)arg1;
- (long long)activeWakeLoggerSource;
- (id)activeWakeSourceDescription;
- (unsigned int)backlightService;
- (void)dealloc;
- (long long)homeButtonType;
- (id)init;
- (void)lockDidBegin;
- (void)setActiveWakeLoggerSource:(long long)arg1;
- (void)setBacklightService:(unsigned int)arg1;
- (void)setHomeButtonType:(long long)arg1;
- (void)setTimesyncService:(unsigned int)arg1;
- (void)setTrackingWake:(bool)arg1;
- (void)setWakeSouceToEventDict:(id)arg1;
- (unsigned int)timesyncService;
- (bool)trackingWake;
- (void)wakeDidBegin:(long long)arg1;
- (void)wakeDidEnd;
- (void)wakeMayBegin:(long long)arg1 withTimestamp:(unsigned long long)arg2;
- (id)wakeSouceToEventDict;

@end
