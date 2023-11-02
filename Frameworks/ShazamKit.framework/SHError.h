
@interface SHError : NSObject

+ (bool)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (bool)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3;
+ (id)messageForCode:(long long)arg1;
+ (id)remapErrorToClientError:(id)arg1;
+ (bool)remapErrorToClientErrorPointer:(id*)arg1;

@end
