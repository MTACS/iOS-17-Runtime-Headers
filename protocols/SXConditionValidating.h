
@protocol SXConditionValidating <NSObject>

@required

- (bool)validateCondition:(id <SXCondition>)arg1 context:(id <SXConditionValidationContext>)arg2;

@end
