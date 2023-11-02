
@interface VUIConfirmationDocumentWrapperViewController : VUIBaseViewController <UIGestureRecognizerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapped;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end
