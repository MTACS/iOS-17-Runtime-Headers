
@interface FBKSFeedbackCount : NSObject {
    FBKSCampaign * _currentCampaign;
    long long  _declineCount;
    NSArray * _errors;
    NSArray * _feedbackFiled;
    FBKSFeedbackCount_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic, readonly) FBKSCampaign *currentCampaign;
@property (nonatomic, readonly) long long declineCount;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSArray *feedbackFiled;
@property (nonatomic, retain) FBKSFeedbackCount_FrameworkPrivateName *swiftObject;

+ (void)fetchCountsForFormWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)currentCampaign;
- (id)debugDescription;
- (long long)declineCount;
- (id)description;
- (id)errors;
- (id)feedbackFiled;
- (id)initWithCampaign:(id)arg1 campaignErrors:(id)arg2 feedbackSubmitted:(id)arg3 declineCount:(long long)arg4;
- (id)initWithSwiftObject:(id)arg1;
- (void)setSwiftObject:(id)arg1;
- (id)swiftObject;

@end
