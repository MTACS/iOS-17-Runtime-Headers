
@interface AAAccountManagementUIResponse : AAResponse {
    NSData * _responseData;
}

@property (nonatomic, readonly) NSData *responseData;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseData;

@end
