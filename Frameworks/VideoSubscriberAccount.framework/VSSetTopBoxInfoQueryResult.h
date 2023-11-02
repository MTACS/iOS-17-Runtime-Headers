
@interface VSSetTopBoxInfoQueryResult : NSObject {
    VSSetTopBoxProfile * _profile;
    VSIdentityProvider * _setTopBoxProvider;
}

@property (nonatomic, copy) VSSetTopBoxProfile *profile;
@property (nonatomic, copy) VSIdentityProvider *setTopBoxProvider;

- (void).cxx_destruct;
- (id)profile;
- (void)setProfile:(id)arg1;
- (void)setSetTopBoxProvider:(id)arg1;
- (id)setTopBoxProvider;

@end
