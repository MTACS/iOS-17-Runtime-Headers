
@interface ProximityReader.NotifyEvents : NSObject {
    void notifyInterface;
}

+ (id)makeNotifier;

- (void).cxx_destruct;
- (bool)handleIncomingCall;
- (id)init;

@end
