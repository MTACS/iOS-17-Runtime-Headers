
@interface SHInsightsError : NSObject

+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3;
+ (id)messageForCode:(long long)arg1;

@end
