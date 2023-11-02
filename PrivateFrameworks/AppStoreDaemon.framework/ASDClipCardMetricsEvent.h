
@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    NSNumber * _itemID;
    NSString * _referralSource;
    NSString * _referralSourceBundleID;
    NSString * _referrerType;
    NSURL * _sourceURL;
    bool  _thirdPartyWithNoAppReferrer;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, retain) NSString *referralSource;
@property (nonatomic, retain) NSString *referralSourceBundleID;
@property (nonatomic, retain) NSString *referrerType;
@property (nonatomic, retain) NSURL *sourceURL;
@property (nonatomic) bool thirdPartyWithNoAppReferrer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClipBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)referralSource;
- (id)referralSourceBundleID;
- (id)referrerType;
- (void)setBundleID:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setReferralSource:(id)arg1;
- (void)setReferralSourceBundleID:(id)arg1;
- (void)setReferrerType:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setThirdPartyWithNoAppReferrer:(bool)arg1;
- (id)sourceURL;
- (bool)thirdPartyWithNoAppReferrer;

@end
