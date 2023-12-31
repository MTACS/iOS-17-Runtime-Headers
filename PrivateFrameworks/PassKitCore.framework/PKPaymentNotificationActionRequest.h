
@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest {
    NSString * _action;
    NSString * _requestID;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSString *requestID;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)action;
- (id)requestID;
- (void)setAction:(id)arg1;
- (void)setRequestID:(id)arg1;

@end
