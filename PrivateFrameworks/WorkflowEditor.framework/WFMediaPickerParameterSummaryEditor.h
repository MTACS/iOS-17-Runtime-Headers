
@interface WFMediaPickerParameterSummaryEditor : WFModuleSummaryEditor <MPMediaPickerControllerDelegatePrivate, UIPopoverPresentationControllerDelegate> {
    UIViewController * _presentedViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentedViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg1;

@end
