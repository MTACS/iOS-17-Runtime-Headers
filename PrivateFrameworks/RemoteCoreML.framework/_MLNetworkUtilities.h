
@interface _MLNetworkUtilities : NSObject

+ (void)bindEndPoints:(id)arg1 localAddr:(const char *)arg2 localPort:(const char *)arg3;
+ (id /* block */)configureTLS:(id)arg1;
+ (id)createSecureConnectionParameter:(id /* block */)arg1 useUDP:(bool)arg2;
+ (id)doInitNetwork:(id)arg1;
+ (void)setAWDL:(id)arg1 useAWDL:(bool)arg2;
+ (id)setProtocolStack:(id)arg1 family:(unsigned long long)arg2;
+ (void)setupBonjour:(id)arg1 name:(const char *)arg2 useBonjour:(bool)arg3 useUDP:(bool)arg4;
+ (void)setupListenerStateChangeHandler:(id)arg1 useUDP:(bool)arg2;

@end
