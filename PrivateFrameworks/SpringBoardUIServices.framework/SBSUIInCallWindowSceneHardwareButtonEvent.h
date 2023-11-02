
@interface SBSUIInCallWindowSceneHardwareButtonEvent : NSObject {
    long long  _buttonEventType;
}

@property (nonatomic, readonly) long long buttonEventType;

- (long long)buttonEventType;
- (id)initWithButtonEventType:(long long)arg1;

@end
