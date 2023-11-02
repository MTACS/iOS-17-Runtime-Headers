
@interface PKAccountWebServiceTransfersResponse : PKAccountWebServiceResponse {
    NSArray * _transfers;
}

@property (nonatomic, readonly, copy) NSArray *transfers;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 account:(id)arg2 request:(id)arg3;
- (id)transfers;

@end
