
@interface CPError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)internalErrorWithDescription:(id)arg1;
+ (id)internalErrorWithDescription:(id)arg1 underlyingError:(id)arg2;

@end
