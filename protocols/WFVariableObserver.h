
@protocol WFVariableObserver <NSObject>

@required

- (void)availableVariablesDidChange;

@optional

- (void)variableContentClassesDidChange;

@end
