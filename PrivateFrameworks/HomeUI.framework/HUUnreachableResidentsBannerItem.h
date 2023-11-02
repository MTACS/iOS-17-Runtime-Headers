
@interface HUUnreachableResidentsBannerItem : HUBannerItem {
    bool  _forceHidden;
}

@property (nonatomic) bool forceHidden;

- (bool)_hasPotentialResidentsConfiguring;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)forceHidden;
- (void)setForceHidden:(bool)arg1;

@end
