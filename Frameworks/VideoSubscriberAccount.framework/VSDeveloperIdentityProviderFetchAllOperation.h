
@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation {
    VSDeveloperServiceConnection * _connection;
    VSOptional * _result;
}

@property (nonatomic, retain) VSDeveloperServiceConnection *connection;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)connection;
- (void)executionDidBegin;
- (id)result;
- (void)setConnection:(id)arg1;
- (void)setResult:(id)arg1;

@end
