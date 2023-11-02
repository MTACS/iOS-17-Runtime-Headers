
@interface CDPWalrusNotificationHandler : NSObject {
    bool  _isObservingWalrusStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
}

@property (nonatomic, readonly) bool isObservingWalrusStatus;

+ (id)sharedInstance;

- (void)_stopObservingWalrusStateChangeNotification;
- (void)dealloc;
- (id)init;
- (bool)isObservingWalrusStatus;
- (void)startObservingWalrusStateChangeNotification;

@end
