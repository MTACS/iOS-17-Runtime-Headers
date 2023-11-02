
@interface NCNotificationRequestCustomContentProvider : NSObject <NCNotificationCustomContentProviding> {
    NCNotificationContentContainerViewController * _customContentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)customContentViewControllerForNotificationRequest:(id)arg1;

@end
