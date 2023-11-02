
@interface IOKMatchingNotificationRef : NSObject {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    IOKMatchingNotification * _notification;
}

@property (nonatomic) IOKMatchingNotification *notification;

- (id)init;
- (void)lock;
- (id)notification;
- (void)setNotification:(id)arg1;
- (void)unlock;

@end
