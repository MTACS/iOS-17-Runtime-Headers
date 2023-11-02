
@interface FBKSFeedbackCount_FrameworkPrivateName : NSObject {
    void currentCampaign;
    void declineCount;
    void errors;
    void feedbackFiled;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic, readonly) FBKSCampaign_FrameworkPrivateName *currentCampaign;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long declineCount;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSArray *feedbackFiled;

+ (void)fetchCountsForFormWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (id)fromJSONWithData:(id)arg1;

- (void).cxx_destruct;
- (id)asJSON;
- (id)currentCampaign;
- (id)debugDescription;
- (long long)declineCount;
- (id)description;
- (id)errors;
- (id)feedbackFiled;
- (id)init;

@end
