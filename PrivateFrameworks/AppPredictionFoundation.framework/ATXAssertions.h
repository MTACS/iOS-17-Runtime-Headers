
@interface ATXAssertions : NSObject

+ (void)assert:(bool)arg1 conditionName:(id)arg2;
+ (void)assert:(bool)arg1 conditionName:(id)arg2 withDescriptionString:(id)arg3;
+ (void)parameterAssert:(id)arg1 parameterName:(id)arg2;
+ (void)parameterAssert:(id)arg1 parameterName:(id)arg2 descriptionString:(id)arg3;

@end
