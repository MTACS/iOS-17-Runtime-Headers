
@protocol TFContainerRegistry <NSObject>

@required

- (<TFCallbackRegistration> *)callback;
- (<TFRegistrationContainer> *)privateContainer;
- (<TFRegistrationContainer> *)publicContainer;

@end
