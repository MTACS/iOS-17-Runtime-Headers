
@interface MUDocumentPickerViewController : UIDocumentPickerViewController <UIAdaptivePresentationControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)presentationControllerDidDismiss:(id)arg1;

@end
