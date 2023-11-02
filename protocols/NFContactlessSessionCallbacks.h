
@protocol NFContactlessSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(NFFieldNotification *)arg1;
- (void)didSelectApplet:(NSString *)arg1;

@optional

- (void)didFelicaStateChange:(NSDictionary *)arg1;

@end
