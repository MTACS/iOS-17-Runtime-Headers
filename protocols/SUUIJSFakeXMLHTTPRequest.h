
@protocol SUUIJSFakeXMLHTTPRequest <JSExport>

@required

- (NSString *)getAllResponseHeaders;
- (NSString *)getResponseHeader:(NSString *)arg1;
- (NSDictionary *)metrics;
- (unsigned int)readyState;
- (id)response;
- (NSString *)responseText;
- (unsigned int)responseType;
- (IKJSXMLDocument *)responseXML;
- (unsigned int)status;
- (NSString *)statusText;

@end
