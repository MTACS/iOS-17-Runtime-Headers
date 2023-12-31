
@interface IDSServiceContainer : NSObject {
    NSMutableSet * _listeners;
    IDSServiceMonitor * _monitor;
}

@property (nonatomic, readonly) NSMutableSet *listeners;
@property (nonatomic, retain) IDSServiceMonitor *monitor;

- (void).cxx_destruct;
- (bool)addListenerID:(id)arg1;
- (bool)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)listeners;
- (id)monitor;
- (bool)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
