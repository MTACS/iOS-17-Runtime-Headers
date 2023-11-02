
@interface ContinuityCaptureButtonPressTracker : NSObject {
    unsigned long long  _buttonLongPressTimeout;
    NSMutableSet * _buttonPressStateByUsage;
    unsigned long long  _creationTime;
}

@property (readonly) bool valid;

- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (id)init;
- (void)registerCordPress:(long long)arg1 down:(bool)arg2;
- (bool)valid;

@end
