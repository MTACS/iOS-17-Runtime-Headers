
@interface SLGoogleLegacyTokenMigrationResponse : NSObject {
    NSError * _error;
    NSString * _responseBody;
    long long  _statusCode;
}

@property (readonly) NSError *error;
@property (readonly) NSString *responseBody;
@property (readonly) long long statusCode;

- (void).cxx_destruct;
- (id)error;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)responseBody;
- (long long)statusCode;

@end
