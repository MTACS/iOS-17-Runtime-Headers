
@interface IMIDSService : NSObject

+ (bool)service:(id)arg1 sendMessage:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id*)arg7 error:(id*)arg8;
+ (bool)service:(id)arg1 sendMessage:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;

@end
