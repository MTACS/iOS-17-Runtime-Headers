
@interface TMLUIGestureRecognizerActionTarget : NSObject {
    NSString * _signalName;
    long long  _state;
}

- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (id)initWithSignal:(id)arg1 state:(long long)arg2;

@end
