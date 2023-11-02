
@interface EKCalendarNotificationReference : NSObject {
    NSDate * _date;
    EKEventStore * _eventStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    EKCalendarNotification * _notification;
    EKObjectID * _objectID;
    int  _type;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) EKCalendarNotification *notification;
@property (nonatomic, readonly) EKObjectID *objectID;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_notification;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
- (id)description;
- (id)eventStore;
- (id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4;
- (id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3;
- (id)notification;
- (id)objectID;
- (int)type;

@end
