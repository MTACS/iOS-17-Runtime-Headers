
@protocol VSJSXMLHTTPRequest <JSExport>

@required

- (void)abort;
- (NSString *)getAllResponseHeaders;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (id)init;
- (void)open:(NSString *)arg1 :(NSString *)arg2 :(NSNumber *)arg3 :(JSValue *)arg4 :(JSValue *)arg5;
- (unsigned long long)readyState;
- (id)response;
- (NSString *)responseText;
- (NSString *)responseType;
- (void)send:(JSValue *)arg1;
- (void)setRequestHeader:(NSString *)arg1 :(NSString *)arg2;
- (void)setResponseType:(NSString *)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (unsigned long long)status;
- (NSString *)statusText;
- (unsigned long long)timeout;

@end
