
@interface DSError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 appName:(id)arg2;
+ (id)errorWithCode:(long long)arg1 appName:(id)arg2 serviceName:(id)arg3 underlyingErrors:(id)arg4;
+ (id)errorWithCode:(long long)arg1 serviceName:(id)arg2;
+ (id)errorWithCode:(long long)arg1 sourceName:(id)arg2;
+ (id)errorWithCode:(long long)arg1 sourceName:(id)arg2 underlyingErrors:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingErrors:(id)arg2;

@end
