
@protocol _SFBarRegistrationObserving <NSObject>

@required

- (void)didCompleteBarRegistrationWithToken:(id <_SFBarRegistrationToken>)arg1;

@optional

- (void)didChangeArrangedBarItems:(id <_SFBarRegistrationToken>)arg1;

@end
