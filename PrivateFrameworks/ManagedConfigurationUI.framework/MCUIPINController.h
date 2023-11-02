
@interface MCUIPINController : DevicePINController <UIAdaptivePresentationControllerDelegate> {
    <DevicePINControllerDelegate> * _delegate;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DevicePINControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)delegate;
- (id)init;
- (id)pinInstructionsPrompt;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)viewWillAppear:(bool)arg1;

@end
