
@interface AXUIEventManager : NSObject {
    NSHashTable * _eventHandlers;
    bool  _laserEnabled;
}

@property (nonatomic, retain) NSHashTable *eventHandlers;
@property (nonatomic, readonly) bool laserEnabled;

+ (id)sharedEventManager;

- (void).cxx_destruct;
- (bool)_handleUIEvent:(id)arg1;
- (id)_init;
- (id)eventHandlers;
- (bool)laserEnabled;
- (void)registerEventHandler:(id)arg1;
- (void)setEventHandlers:(id)arg1;
- (void)unregisterEventHandler:(id)arg1;

@end
