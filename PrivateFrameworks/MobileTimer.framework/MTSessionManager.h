
@interface MTSessionManager : NSObject <MTUserDefaultNotificationObserver> {
    MTXPCConnectionProvider * _connectionProvider;
    MTSessionManagerExportedObject * _exportedObject;
    MTMetrics * _metrics;
    NSNotificationCenter * _notificationCenter;
}

@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTSessionManagerExportedObject *exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMetrics *metrics;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) id notificationObject;
@property (readonly) Class superclass;

+ (void)warmUp;

- (void).cxx_destruct;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (void)checkIn;
- (id)connectionProvider;
- (void)dealloc;
- (void)endAlertingSession;
- (id)exportedObject;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)metrics;
- (id)notificationCenter;
- (id)notificationObject;
- (void)reconnect;
- (void)setExportedObject:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end
