
@interface MDMDeclarativeManagement : NSObject

+ (id)_createNoInstallationError;
+ (id)_createUnsupportedFeatureError;
+ (void)downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)executeRequestForEndpoint:(id)arg1 channelType:(unsigned long long)arg2 requestData:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchDataAtURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
