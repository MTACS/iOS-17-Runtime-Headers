
@interface CSAddParticipantsRemoteViewController : _UIRemoteViewController <CSAddParticipantsViewControllerHost> {
    UIViewController<CSAddParticipantsPublicController> * _publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController<CSAddParticipantsPublicController> *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)dismissViewControllerWithError:(id)arg1 shareURL:(id)arg2 ckShare:(id)arg3;
- (id)publicController;
- (void)setPublicController:(id)arg1;
- (void)showContactPickerFromSourceRect:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
