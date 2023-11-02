
@interface SiriActivationButtonEventListener : SiriActivationSource {
    NSMutableDictionary * _listeners;
}

@property (nonatomic, retain) NSMutableDictionary *listeners;

+ (id)listener;

- (void).cxx_destruct;
- (id)_init;
- (void)_registerListenerWithIdentifier:(id)arg1;
- (oneway void)buttonDownWithButtonIdentifier:(id)arg1 forListenerIdentifier:(id)arg2 atTimestamp:(id)arg3;
- (oneway void)buttonLongPressWithButtonIdentifier:(id)arg1 forListenerIdentifier:(id)arg2 atTimestamp:(id)arg3;
- (oneway void)buttonUpWithButtonIdentifier:(id)arg1 forListenerIdentifier:(id)arg2 atTimestamp:(id)arg3;
- (void)configureConnectionForIdentifier:(id)arg1;
- (id)connection;
- (void)invalidate;
- (void)invalidatedAtTimestamp:(double)arg1;
- (id)listeners;
- (void)registerWithListener:(id)arg1 identifier:(id)arg2;
- (void)setListeners:(id)arg1;
- (void)unregisterListenerWithIdentifier:(id)arg1;

@end
