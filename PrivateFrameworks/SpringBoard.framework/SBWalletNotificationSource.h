
@interface SBWalletNotificationSource : NSObject <NCNotificationSource> {
    NCNotificationDispatcher * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dispatcher;
- (id)initWithDispatcher:(id)arg1;
- (void)modifyNotificationRequestForCardItem:(id)arg1;
- (void)postNotificationRequestForCardItem:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)withdrawNotificationRequestForCardItem:(id)arg1;

@end
