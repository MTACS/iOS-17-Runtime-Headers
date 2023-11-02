
@interface TUHardwareControlsBroadcaster : NSObject {
    NSString * _eventTypeToIgnore;
    struct __IOHIDEventSystemClient { } * _hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void).cxx_destruct;
- (void)dealloc;
- (id)eventTypeToIgnore;
- (id)init;
- (void)longPressTimerFired:(id)arg1;
- (void)setEventTypeToIgnore:(id)arg1;

@end
