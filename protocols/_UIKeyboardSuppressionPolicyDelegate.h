
@protocol _UIKeyboardSuppressionPolicyDelegate <NSObject>

@required

- (bool)_shouldSuppressForDelegate:(UIResponder *)arg1;

@optional

- (bool)_shouldSuppressAssistantBarForDelegate:(UIResponder *)arg1;

@end
