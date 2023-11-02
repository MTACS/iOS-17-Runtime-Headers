
@interface TabDocumentDropHandler : NSObject {
    UIViewController * _alertPresentationViewController;
    unsigned long long  _maximumNumberOfTabs;
}

@property (nonatomic) UIViewController *alertPresentationViewController;
@property (nonatomic, readonly) unsigned long long maximumNumberOfTabs;

+ (bool)canHandleSession:(id)arg1;
+ (bool)canPinAllItemsInSession:(id)arg1;
+ (id)commonPinnedStateForDragItems:(id)arg1;
+ (unsigned long long)proposedOperationForSession:(id)arg1 intoWindowWithPrivateBrowsingEnabled:(bool)arg2;
+ (id)tabDocumentsForDragItems:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_minimumNumberOfNewTabsRequiringConfirmation;
- (id)alertPresentationViewController;
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(id /* block */)arg3 insertionHandler:(id /* block */)arg4;
- (void)dropItemsForSession:(id)arg1 withOperation:(unsigned long long)arg2 restorationHandler:(id /* block */)arg3 insertionHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithAlertPresentationViewController:(id)arg1;
- (id)initWithMaximumNumberOfTabs:(unsigned long long)arg1 alertPresentationViewController:(id)arg2;
- (unsigned long long)maximumNumberOfTabs;
- (void)promptIfNeededToConfirmNumberOfNavigationIntents:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setAlertPresentationViewController:(id)arg1;

@end
