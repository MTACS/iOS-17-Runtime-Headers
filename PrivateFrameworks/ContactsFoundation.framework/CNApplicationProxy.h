
@interface CNApplicationProxy : NSObject <NSSecureCoding> {
    NSArray * _activityTypes;
    NSString * _bundleIdentifier;
    NSString * _localizedName;
    NSString * _teamIdentifier;
}

@property (nonatomic, copy) NSArray *activityTypes;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *teamIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityTypes;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithLSApplicationProxy:(id)arg1;
- (id)localizedName;
- (void)setActivityTypes:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;

@end
