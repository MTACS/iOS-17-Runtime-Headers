
@interface AMSHandleQRDialogResult : NSObject

+ (id)_dismissalIdentifierFromDialogResult:(id)arg1;
+ (bool)_isDismissQRDialogEnabled;
+ (void)_observeQRDialogDismissalNotificationForIdentifier:(id)arg1 dialog:(id)arg2;
+ (void)_removeQRDialogDismissalObserverForIdentifier:(id)arg1;
+ (void)handleQRDialogPresentationForRequest:(id)arg1 result:(id)arg2 logKey:(id)arg3;

@end
