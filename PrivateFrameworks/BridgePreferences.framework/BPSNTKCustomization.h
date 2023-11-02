
@interface BPSNTKCustomization : NSObject

- (id)facesViewController;
- (id)galleryViewController;
- (bool)handlePresentationOfNotification:(id)arg1 fromNotificationCenter:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)handleUserNotificationResponse:(id)arg1 fromNotificationCenter:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)userNotificationCategories;

@end
