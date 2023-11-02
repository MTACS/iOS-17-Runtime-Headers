
@interface SAError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4;

@end
