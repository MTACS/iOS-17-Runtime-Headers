
@protocol NFFieldDetectSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(NFFieldNotification *)arg1;

@end
