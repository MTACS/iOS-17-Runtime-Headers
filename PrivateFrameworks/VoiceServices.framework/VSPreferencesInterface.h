
@interface VSPreferencesInterface : NSObject {
    NSUserDefaults * _defaults;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

@property (nonatomic) bool OOBNeedsToBeMeasured;
@property (nonatomic, retain) NSDate *OOBTriggeredDate;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, readonly) NSString *deviceUUID;
@property (nonatomic, retain) NSDate *lastTTSRequestDate;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } lock;

+ (id)defaultInstance;
+ (id)dictionaryRepresentationOfVoices:(id)arg1;

- (void).cxx_destruct;
- (bool)OOBNeedsToBeMeasured;
- (id)OOBTriggeredDate;
- (void)dealloc;
- (id)defaults;
- (id)deviceUUID;
- (id)initWithSuiteName:(id)arg1;
- (id)lastTTSRequestDate;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })lock;
- (void)migrateDefaults;
- (void)removeSubscriptionsForAccessory:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setLastTTSRequestDate:(id)arg1;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setOOBNeedsToBeMeasured:(bool)arg1;
- (void)setOOBTriggeredDate:(id)arg1;
- (void)setSubscribedVoices:(id)arg1 forClientID:(id)arg2 accessoryID:(id)arg3;
- (id)subscribedVoicesForClientID:(id)arg1 accessoryID:(id)arg2;

@end
