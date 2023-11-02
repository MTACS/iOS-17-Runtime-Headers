
@interface CRKConcreteDarwinNotificationSubscription : NSObject <CRKCancelable> {
    int  _notificationToken;
}

@property (nonatomic) int notificationToken;

+ (id)subscriptionWithNotificationName:(id)arg1 handler:(id /* block */)arg2;

- (void)cancel;
- (void)dealloc;
- (id)initWithNotificationToken:(int)arg1;
- (int)notificationToken;
- (void)setNotificationToken:(int)arg1;

@end
