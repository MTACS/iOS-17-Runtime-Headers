
@interface _ATXInternalNotification : NSObject <_ATXInternalNotificationProtocol> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _notificationName;
    id  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)postData:(id)arg1 forNotificationNamed:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationName:(id)arg1;
- (void)registerForNotifications:(id /* block */)arg1;

@end