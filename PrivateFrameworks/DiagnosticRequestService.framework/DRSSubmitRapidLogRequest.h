
@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest {
    NSNumber * _cfDidSucceed;
    NSString * _cfFailureReason;
    NSData * _cfReplyPayload;
}

@property (nonatomic, retain) NSNumber *cfDidSucceed;
@property (nonatomic, retain) NSString *cfFailureReason;
@property (nonatomic, retain) NSData *cfReplyPayload;

+ (Class)_moClass;
+ (id)entityName;

- (void).cxx_destruct;
- (void)_configureRequestMO:(id)arg1;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)arg1;
- (id)cfDidSucceed;
- (id)cfFailureReason;
- (id)cfReplyPayload;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(bool)arg1;
- (unsigned long long)logSizeLimitBytes;
- (id)requestType;
- (void)setCfDidSucceed:(id)arg1;
- (void)setCfFailureReason:(id)arg1;
- (void)setCfReplyPayload:(id)arg1;
- (id)targetContainerName;

@end
