
@interface FCAMSPushHandler : NSObject {
    NFLazy * _lazyHandler;
}

@property (nonatomic, retain) NFLazy *lazyHandler;

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)handleNotificationResponse:(id)arg1;
- (id)init;
- (id)lazyHandler;
- (void)setLazyHandler:(id)arg1;
- (bool)shouldHandleNotification:(id)arg1;
- (bool)shouldHandleNotificationResponse:(id)arg1;

@end
