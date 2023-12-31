
@interface FTCServiceContainer : NSObject {
    NSMutableSet * _listeners;
    FTCServiceMonitor * _monitor;
}

@property (nonatomic, readonly, retain) NSMutableSet *listeners;
@property (nonatomic, retain) FTCServiceMonitor *monitor;

- (bool)addListenerID:(id)arg1;
- (void)dealloc;
- (bool)hasListenerID:(id)arg1;
- (id)initWithServiceType:(long long)arg1;
- (id)listeners;
- (id)monitor;
- (bool)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
