
@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; } buttonEvent;

- (struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })buttonEvent;
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (unsigned long long)type;

@end
