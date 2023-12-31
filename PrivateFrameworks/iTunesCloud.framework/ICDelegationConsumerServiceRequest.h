
@interface ICDelegationConsumerServiceRequest : NSObject {
    ICRequestContext * _requestContext;
    double  _timeoutInterval;
    NSDictionary * _userIdentityDelegationAccountUUIDs;
}

@property (nonatomic, readonly, copy) ICRequestContext *requestContext;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly, copy) NSDictionary *userIdentityDelegationAccountUUIDs;

- (void).cxx_destruct;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)arg1 requestContext:(id)arg2 timeoutInterval:(double)arg3;
- (id)requestContext;
- (double)timeoutInterval;
- (id)userIdentityDelegationAccountUUIDs;

@end
