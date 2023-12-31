
@interface MRLegacySendHIDEventMessage : MRProtocolMessage {
    struct __IOHIDEvent { } * _event;
}

@property (nonatomic, readonly) struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; } buttonEvent;

- (struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })buttonEvent;
- (void)dealloc;
- (id)description;
- (id)initWithHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)type;

@end
