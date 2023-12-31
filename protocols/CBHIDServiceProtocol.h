
@protocol CBHIDServiceProtocol <NSObject>

@required

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;

@end
