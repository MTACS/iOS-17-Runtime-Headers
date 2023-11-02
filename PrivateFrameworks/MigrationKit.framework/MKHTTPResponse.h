
@interface MKHTTPResponse : NSObject {
    NSData * _body;
    MKHTTPHeaders * _headers;
}

@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) MKHTTPHeaders *headers;

- (void).cxx_destruct;
- (id)body;
- (id)headers;
- (id)init;
- (id)responseData;
- (void)setBody:(id)arg1;
- (void)setHeaders:(id)arg1;

@end
