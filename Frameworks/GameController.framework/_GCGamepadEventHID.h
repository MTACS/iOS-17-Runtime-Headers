
@interface _GCGamepadEventHID : NSObject <_GCGamepadEvent> {
    struct __IOHIDEvent { } * _event;
    struct __IOHIDEvent { } * _extendedEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct __IOHIDEvent { }*event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned long long timestamp;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __IOHIDEvent { }*)event;
- (float)floatValueForElement:(long long)arg1;
- (bool)hasValidValueForElement:(long long)arg1;
- (id)initWithHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)timestamp;

@end
