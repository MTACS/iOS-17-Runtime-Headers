
@interface PRSPosterUpdateHomeScreenAppearancePayload : PRSPosterUpdatePayload <NSSecureCoding> {
    PRSPosterUpdateColorPayload * _gradientColorAppearance;
    NSString * _homeProviderIdentifier;
    PRSPosterUpdateSessionInfo * _homeProviderUpdateSessionInfo;
    PRSPosterUpdateColorPayload * _solidColorAppearance;
    PRSPosterUpdateSessionInfo * _switcherProviderUpdateSessionInfo;
    unsigned long long  _updatedAppearanceType;
}

@property (nonatomic, readonly, copy) PRSPosterUpdateColorPayload *gradientColorAppearance;
@property (nonatomic, readonly, copy) NSString *homeProviderIdentifier;
@property (nonatomic, readonly) PRSPosterUpdateSessionInfo *homeProviderUpdateSessionInfo;
@property (nonatomic, readonly, copy) PRSPosterUpdateColorPayload *solidColorAppearance;
@property (nonatomic, readonly) PRSPosterUpdateSessionInfo *switcherProviderUpdateSessionInfo;
@property (nonatomic, readonly) unsigned long long updatedAppearanceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientColorAppearance;
- (id)homeProviderIdentifier;
- (id)homeProviderUpdateSessionInfo;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdatedAppearanceType:(unsigned long long)arg1;
- (id)initWithUpdatedAppearanceType:(unsigned long long)arg1 gradientColorAppearance:(id)arg2;
- (id)initWithUpdatedAppearanceType:(unsigned long long)arg1 solidColorAppearance:(id)arg2;
- (id)initWithUpdatedAppearanceType:(unsigned long long)arg1 updateHomePoster:(id)arg2 homeProviderIdentifier:(id)arg3;
- (id)initWithUpdatedAppearanceType:(unsigned long long)arg1 updateSwitcherPoster:(id)arg2;
- (id)rawValue;
- (id)solidColorAppearance;
- (id)switcherProviderUpdateSessionInfo;
- (unsigned long long)updatedAppearanceType;

@end
