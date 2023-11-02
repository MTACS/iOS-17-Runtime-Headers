
@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountDSID;
    NSString * _bundleID;
    NSString * _bundlePath;
    long long  _claimStyle;
    unsigned long long  _exitReason;
    int  _fairplayStatus;
    bool  _forceRevoke;
    bool  _forceUpsell;
    bool  _isBackground;
    NSDictionary * _relaunchOptions;
}

@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;
@property (nonatomic) int fairplayStatus;
@property (nonatomic) bool forceRevoke;
@property (nonatomic) bool forceUpsell;
@property (nonatomic) bool isBackground;
@property (nonatomic, copy) NSDictionary *relaunchOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDSID;
- (id)bundleID;
- (id)bundlePath;
- (long long)claimStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)exitReason;
- (int)fairplayStatus;
- (bool)forceRevoke;
- (bool)forceUpsell;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBackground;
- (id)relaunchOptions;
- (void)setExitReason:(unsigned long long)arg1;
- (void)setFairplayStatus:(int)arg1;
- (void)setForceRevoke:(bool)arg1;
- (void)setForceUpsell:(bool)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setRelaunchOptions:(id)arg1;

@end
