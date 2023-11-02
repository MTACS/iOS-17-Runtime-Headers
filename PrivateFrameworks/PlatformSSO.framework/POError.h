
@interface POError : NSError

+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;
+ (id)internalErrorWithMessage:(id)arg1;

@end
