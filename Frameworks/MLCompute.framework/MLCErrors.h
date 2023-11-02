
@interface MLCErrors : NSObject

+ (id)createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)invalidInputErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidStateErrorForMethod:(id)arg1 description:(id)arg2;

@end
