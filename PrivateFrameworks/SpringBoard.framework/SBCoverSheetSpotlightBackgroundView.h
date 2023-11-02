
@interface SBCoverSheetSpotlightBackgroundView : UIView <SBSpotlightBackgroundWeighting> {
    SBSearchBackdropView * _searchBlurBackdropView;
}

@property (nonatomic, readonly) SBSearchBackdropView *searchBlurBackdropView;
@property (nonatomic) double spotlightBackgroundWeighting;

- (void).cxx_destruct;
- (id)init;
- (id)searchBlurBackdropView;
- (void)setSpotlightBackgroundWeighting:(double)arg1;
- (double)spotlightBackgroundWeighting;

@end
