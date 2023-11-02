
@interface MapsSuggestionsNotificationReceiver : NSObject {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { 
        struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { 
            struct NotificationReceiver {} *__value_; 
        } __ptr_; 
    }  _receiver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDarwinNotification:(const char *)arg1 block:(id /* block */)arg2;
- (id)initWithDarwinNotification:(const char *)arg1 queue:(id)arg2 block:(id /* block */)arg3;

@end
