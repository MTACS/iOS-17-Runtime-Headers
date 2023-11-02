
@interface PKAccountWebServiceSupportTopicsResponse : PKAccountWebServiceResponse {
    NSArray * _topics;
}

@property (nonatomic, readonly, copy) NSArray *topics;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)topics;

@end
