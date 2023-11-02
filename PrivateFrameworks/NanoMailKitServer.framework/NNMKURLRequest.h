
@interface NNMKURLRequest : NSObject

+ (id)_buildNumber;
+ (void)_formBodyRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 method:(id)arg4 token:(id)arg5 errorParser:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)_getRequestWithBaseURLString:(id)arg1 path:(id)arg2 params:(id)arg3 token:(id)arg4 errorParser:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)_handleRequest:(id)arg1 errorParser:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)_hardwareModel;
+ (void)_jsonBodyRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 method:(id)arg4 token:(id)arg5 needsBAA:(bool)arg6 errorParser:(id /* block */)arg7 completion:(id /* block */)arg8;
+ (id)_methodNameForType:(unsigned long long)arg1;
+ (id)_osName;
+ (id)_osVersion;
+ (id)_systemVersionDictionary;
+ (void)formPostRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 token:(id)arg4 completion:(id /* block */)arg5;
+ (void)getRequestWithBaseURLString:(id)arg1 path:(id)arg2 params:(id)arg3 token:(id)arg4 completion:(id /* block */)arg5;
+ (id)mailNotificationURL;
+ (void)patchRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 token:(id)arg4 completion:(id /* block */)arg5;
+ (void)postRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 token:(id)arg4 completion:(id /* block */)arg5;
+ (void)postRequestWithBaseURLString:(id)arg1 path:(id)arg2 body:(id)arg3 token:(id)arg4 needsBAA:(bool)arg5 completion:(id /* block */)arg6;
+ (void)requestWithType:(unsigned long long)arg1 baseURLString:(id)arg2 path:(id)arg3 body:(id)arg4 token:(id)arg5 needsBAA:(bool)arg6 errorParser:(id /* block */)arg7 completion:(id /* block */)arg8;
+ (id)serverFriendlyDescription;

@end
