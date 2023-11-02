
@interface AAResponse : NSObject {
    NSData * _data;
    NSError * _error;
    NSHTTPURLResponse * _httpResponse;
    NSNumber * _maxAge;
    NSString * _mediaType;
    NSDictionary * _responseDictionary;
    long long  _statusCode;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSHTTPURLResponse *httpResponse;
@property (nonatomic, readonly) NSNumber *maxAge;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (void)_parseResponse:(id)arg1 ofType:(id)arg2;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (id)data;
- (id)error;
- (id)httpResponse;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(bool)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 mediaType:(id)arg3;
- (id)maxAge;
- (id)mediaType;
- (id)protocolVersion;
- (id)responseDictionary;
- (void)setError:(id)arg1;
- (long long)statusCode;

@end
