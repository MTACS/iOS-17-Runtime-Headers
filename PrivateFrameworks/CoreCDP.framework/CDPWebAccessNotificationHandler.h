
@interface CDPWebAccessNotificationHandler : NSObject {
    bool  _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)_stopObservingWebAccessStateChangeNotification;
- (void)dealloc;
- (void)startObservingWebAccessStateChangeNotification;

@end
