
@interface PKAccountWebServiceAccountUsersResponse : PKAccountWebServiceResponse {
    NSDate * _lastUpdated;
    NSSet * _users;
}

@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly, copy) NSSet *users;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;
- (id)users;

@end
