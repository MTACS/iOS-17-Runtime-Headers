
@interface MDMCheckInRequest : NSObject

+ (id)_createNoInstallationError;
+ (id)_createUnsupportedFeatureError;
+ (void)executeRequestForMessageType:(id)arg1 channelType:(unsigned long long)arg2 requestDict:(id)arg3 completionHandler:(id /* block */)arg4;

@end
