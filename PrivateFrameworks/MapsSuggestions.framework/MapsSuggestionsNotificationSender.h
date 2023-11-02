
@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> { 
        struct __compressed_pair<MSg::NotificationSender *, std::default_delete<MSg::NotificationSender>> { 
            struct NotificationSender {} *__value_; 
        } __ptr_; 
    }  _sender;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDarwinNotification:(const char *)arg1;
- (void)notify;
- (void)notifyWithPayloadString:(id)arg1;
- (void)notifyWithState:(unsigned long long)arg1;

@end
