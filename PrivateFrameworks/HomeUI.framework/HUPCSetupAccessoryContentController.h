
@interface HUPCSetupAccessoryContentController : HUPCCenterFillContentController {
    HUHomeAccessoryTileView * _homeAccessoryTileView;
}

@property (nonatomic, readonly) HUHomeAccessoryTileView *homeAccessoryTileView;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (id)homeAccessoryTileView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 item:(id)arg3;
- (id)item;

@end
