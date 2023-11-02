
@interface ENRemotePresentationRequest : NSObject <NSCopying, NSSecureCoding> {
    ENRegion * _agencyRegion;
    NSString * _appBundleIdentifier;
    NSDictionary * _decisionInfo;
    NSUUID * _receiptId;
    long long  _requestType;
    bool  _testMode;
}

@property (nonatomic, copy) ENRegion *agencyRegion;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSDictionary *decisionInfo;
@property (nonatomic, copy) NSUUID *receiptId;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic) long long requestType;
@property (nonatomic) bool testMode;

+ (id)presentationRequestWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)agencyRegion;
- (id)appBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decisionInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)keyReleaseRequestCompletedWithDecision:(bool)arg1;
- (void)onboardingRequestCompletedWithDecision:(bool)arg1;
- (void)preApprovalRequestCompletedWithDecision:(bool)arg1;
- (id)receiptId;
- (id)region;
- (long long)requestType;
- (void)setAgencyRegion:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setDecisionInfo:(id)arg1;
- (void)setReceiptId:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setTestMode:(bool)arg1;
- (bool)testMode;

@end
