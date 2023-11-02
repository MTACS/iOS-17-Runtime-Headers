
@interface WebNotification : NSObject {
    WebNotificationPrivate * _private;
}

- (id)body;
- (void)dealloc;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (void)finalize;
- (id)iconURL;
- (id)init;
- (id)initWithCoreNotification:(void*)arg1;
- (id)lang;
- (id)notificationID;
- (id)origin;
- (id)tag;
- (id)title;

@end
