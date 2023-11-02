
@interface HUMultiUserTokenFixBannerItem : HUBannerItem {
    bool  _forceHidden;
    ACAccount * _homeMediaAccount;
}

@property (nonatomic) bool forceHidden;
@property (nonatomic, retain) ACAccount *homeMediaAccount;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)forceHidden;
- (id)homeMediaAccount;
- (void)setForceHidden:(bool)arg1;
- (void)setHomeMediaAccount:(id)arg1;

@end
