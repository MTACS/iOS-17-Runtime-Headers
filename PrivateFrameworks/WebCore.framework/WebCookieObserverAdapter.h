
@interface WebCookieObserverAdapter : NSObject {
    void * observer;
}

- (void)cookiesChangedNotificationHandler:(id)arg1;
- (id)initWithObserver:(void*)arg1;

@end
