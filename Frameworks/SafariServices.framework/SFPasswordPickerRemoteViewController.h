
@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController <SFPasswordPickerRemoteViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;

- (bool)_canShowWhileLocked;
- (void)fillPassword:(id)arg1;
- (void)fillUsername:(id)arg1;
- (void)fillVerificationCode:(id)arg1;
- (void)selectedCredential:(id)arg1;

@end
