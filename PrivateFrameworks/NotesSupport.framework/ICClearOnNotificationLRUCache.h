
@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache {
    <NSObject> * _notificationToken;
}

@property (nonatomic, retain) <NSObject> *notificationToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMaxSize:(unsigned long long)arg1 notificationName:(id)arg2;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;

@end
