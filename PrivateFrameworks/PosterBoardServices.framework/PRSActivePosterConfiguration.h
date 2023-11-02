
@interface PRSActivePosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    PRSPosterConfiguration * _homeScreenPosterConfiguration;
    PRSPosterConfiguration * _lockScreenPosterConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterConfiguration *homeScreenPosterConfiguration;
@property (nonatomic, readonly) PRSPosterConfiguration *lockScreenPosterConfiguration;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeScreenPosterConfiguration;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockScreenPosterConfiguration:(id)arg1 homeScreenPosterConfiguration:(id)arg2;
- (id)lockScreenPosterConfiguration;

@end
