
@interface DOMTextEvent : DOMUIEvent

@property (readonly, copy) NSString *data;

- (id)data;
- (void)initTextEvent:(id)arg1 canBubbleArg:(bool)arg2 cancelableArg:(bool)arg3 viewArg:(id)arg4 dataArg:(id)arg5;

@end
