
@interface GEOXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_xpc_object> * _criteria;
    id /* block */  _handler;
    bool  _isRepeating;
    bool  _isScheduled;
    geo_isolater * _isolation;
    NSString * _name;
    bool  _shouldLaunchDaemon;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *criteria;
@property (nonatomic, readonly, copy) NSString *name;

+ (void)_checkInActivity:(id)arg1 resultHandler:(id /* block */)arg2 handler:(id /* block */)arg3;
+ (void)_geod_checkInActivity:(id)arg1 group:(id)arg2 handler:(id /* block */)arg3;
+ (void)addActivity:(id)arg1 shouldLaunchDaemon:(bool)arg2 repeating:(bool)arg3;
+ (void)attachToActivity:(id)arg1 resultHandler:(id /* block */)arg2 handler:(id /* block */)arg3;
+ (void)cancelActivity:(id)arg1;
+ (void)clearActivity:(id)arg1;
+ (id)initialCheckinGroup;
+ (id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(bool)arg3 handler:(id /* block */)arg4;
+ (void)resetActivities;
+ (void)updateActivities:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_handleRunActivity:(id)arg1;
- (void)_replaceHandler:(id /* block */)arg1;
- (void)cancelActivity;
- (id)criteria;
- (void)deferActivity;
- (void)finishActivity;
- (id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(bool)arg3 isAlreadyScheduled:(bool)arg4 handler:(id /* block */)arg5;
- (id)name;
- (void)setCriteria:(id)arg1;
- (bool)shouldDeferActivity;

@end
