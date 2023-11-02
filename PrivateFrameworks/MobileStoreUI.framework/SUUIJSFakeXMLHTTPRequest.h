
@interface SUUIJSFakeXMLHTTPRequest : IKJSObject <SUUIJSFakeXMLHTTPRequest> {
    NSData * _data;
    NSDictionary * _performanceMetrics;
    NSHTTPURLResponse * _response;
}

@property (readonly) NSDictionary *metrics;
@property (readonly) unsigned int readyState;
@property (readonly) id response;
@property (readonly) NSString *responseText;
@property (readonly) unsigned int responseType;
@property (readonly) IKJSXMLDocument *responseXML;
@property (readonly) unsigned int status;
@property (readonly, retain) NSString *statusText;

- (void).cxx_destruct;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (id)metrics;
- (unsigned int)readyState;
- (id)response;
- (id)responseText;
- (unsigned int)responseType;
- (id)responseXML;
- (unsigned int)status;
- (id)statusText;

@end
