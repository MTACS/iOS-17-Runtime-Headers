
@interface AAEmailVettingRequest : AARequest {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)urlRequest;

@end
