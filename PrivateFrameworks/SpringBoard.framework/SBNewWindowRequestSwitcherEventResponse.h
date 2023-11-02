
@interface SBNewWindowRequestSwitcherEventResponse : SBSwitcherModifierEventResponse {
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (long long)type;

@end
