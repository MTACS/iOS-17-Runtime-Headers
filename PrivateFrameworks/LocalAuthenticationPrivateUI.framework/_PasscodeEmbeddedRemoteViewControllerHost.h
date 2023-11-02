
@interface _PasscodeEmbeddedRemoteViewControllerHost : _UIRemoteViewController <LAUIPasscodeHost, LAUIPasscodeService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)endEditing;
- (void)passcodeVerificationFinished:(id)arg1;
- (void)setContext:(id)arg1;
- (void)startEditing;

@end
