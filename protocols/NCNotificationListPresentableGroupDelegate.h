
@protocol NCNotificationListPresentableGroupDelegate <NCNotificationListBaseComponentDelegate>

@required

- (void)notificationListPresentableGroup:(void *)arg1 requestsScrollToTopOfCollectionWithCompletion:(void *)arg2; // needs 2 arg types, found 6: NCNotificationListPresentableGroup *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)shouldAllowRestackingForNotificationListPresentableGroup:(NCNotificationListPresentableGroup *)arg1;

@optional

- (void)notificationListPresentableGroup:(NCNotificationListPresentableGroup *)arg1 didReceivedHorizontalTranslation:(double)arg2;

@end
