
@interface ANSystemNotificationObserver : NSObject {
    id /* block */  _observerHandler;
}

@property (copy) id /* block */ observerHandler;

+ (id)observer:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_languageDidChange;
- (void)dealloc;
- (id)init;
- (id)initWithHandler:(id /* block */)arg1;
- (id /* block */)observerHandler;
- (void)removeNotificationObservers;
- (void)setObserverHandler:(id /* block */)arg1;
- (void)startObservingNotifications;

@end
