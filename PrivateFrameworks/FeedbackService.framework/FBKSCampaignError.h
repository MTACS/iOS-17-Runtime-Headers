
@interface FBKSCampaignError : NSObject {
    FBKSCampaignError_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, retain) FBKSCampaignError_FrameworkPrivateName *swiftObject;

- (void).cxx_destruct;
- (long long)code;
- (id)date;
- (id)description;
- (id)domain;
- (id)errorDescription;
- (id)initWithSwiftObject:(id)arg1;
- (void)setSwiftObject:(id)arg1;
- (id)swiftObject;

@end
