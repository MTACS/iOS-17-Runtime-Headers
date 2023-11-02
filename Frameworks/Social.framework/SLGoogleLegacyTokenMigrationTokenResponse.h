
@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse {
    NSString * _errorMessage;
    NSString * _token;
}

@property (readonly) NSString *errorMessage;
@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)errorMessage;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)token;

@end
