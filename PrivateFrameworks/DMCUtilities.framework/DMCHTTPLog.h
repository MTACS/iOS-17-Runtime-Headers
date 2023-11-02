
@interface DMCHTTPLog : NSObject

+ (id)_logDirectoryForIdentifier:(id)arg1;
+ (void)_writeRequestLogToURL:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForIdentifier:(id)arg1 request:(id)arg2 response:(id)arg3 responseData:(id)arg4 responseError:(id)arg5;
+ (void)logHTTPDetailsForIdentifier:(id)arg1 request:(id)arg2 response:(id)arg3 responseURL:(id)arg4 responseError:(id)arg5;

@end
