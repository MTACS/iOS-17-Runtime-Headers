
@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController {
    HUHomeAccessoryTileView * _homeAccessoryTileView;
}

@property (nonatomic, readonly) HUHomeAccessoryTileView *homeAccessoryTileView;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (id)homeAccessoryTileView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4;
- (id)item;

@end
