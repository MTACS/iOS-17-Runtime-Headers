
@interface SecTapToRadar : NSObject {
    NSString * _alert;
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _radarDescription;
    NSString * _radarnumber;
}

@property (retain) NSString *alert;
@property (nonatomic, retain) NSString *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *radarDescription;
@property (retain) NSString *radarnumber;

+ (bool)askUserIfTTR:(id)arg1;
+ (void)disableTTRsEntirely;
+ (bool)isRateLimited:(id)arg1;
+ (id)keyname:(id)arg1;
+ (void)triggerTapToRadar:(id)arg1;

- (void).cxx_destruct;
- (id)alert;
- (void)clearRetryTimestamp;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)initTapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3;
- (bool)isRateLimited;
- (id)queue;
- (id)radarDescription;
- (id)radarnumber;
- (void)setAlert:(id)arg1;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarnumber:(id)arg1;
- (void)trigger;
- (void)updateRetryTimestamp;

@end
