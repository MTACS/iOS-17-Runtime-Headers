
@interface SeymourClient.WiFiObserver : NSObject {
    void delegate;
    void isEnabled;
    void queue;
    void wifiInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
