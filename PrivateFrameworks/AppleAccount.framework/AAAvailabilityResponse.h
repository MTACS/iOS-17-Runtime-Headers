
@interface AAAvailabilityResponse : AAResponse {
    NSString * _eta;
    NSString * _feature;
    NSString * _status;
}

@property (nonatomic, readonly) NSString *eta;
@property (nonatomic, readonly) NSString *feature;
@property (nonatomic, readonly) NSString *status;

- (void).cxx_destruct;
- (id)eta;
- (id)feature;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)status;

@end
