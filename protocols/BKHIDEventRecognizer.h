
@protocol BKHIDEventRecognizer <NSObject>

@required

- (long long)processEvent:(struct __IOHIDEvent { }*)arg1 shouldConsume:(bool*)arg2;

@end
