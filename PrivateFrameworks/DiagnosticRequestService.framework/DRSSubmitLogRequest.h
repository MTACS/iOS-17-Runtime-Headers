
@interface DRSSubmitLogRequest : DRSRequest

+ (Class)_moClass;
+ (id)entityName;

- (void)_configureRequestMO:(id)arg1;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)arg1;
- (unsigned long long)expectedType;
- (bool)isEqualToRequest:(id)arg1;
- (id)replyForMessage:(id)arg1;
- (id)requestType;

@end
