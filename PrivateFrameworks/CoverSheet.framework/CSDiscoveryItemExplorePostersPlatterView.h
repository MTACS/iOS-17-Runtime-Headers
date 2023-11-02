
@interface CSDiscoveryItemExplorePostersPlatterView : PLPlatterDiscoveryView {
    bool  _animationPaused;
    <CSDiscoveryItemExplorePostersPlatterViewDelegate> * _delegate;
    CAStateController * _graphicStateController;
    CALayer * _rootAnimationLayer;
}

@property (getter=isAnimationPaused, nonatomic) bool animationPaused;
@property (nonatomic) <CSDiscoveryItemExplorePostersPlatterViewDelegate> *delegate;
@property (nonatomic, retain) CAStateController *graphicStateController;
@property (nonatomic, retain) CALayer *rootAnimationLayer;

- (void).cxx_destruct;
- (void)_configureGraphicViewIfNecessary;
- (void)_pauseLayer:(id)arg1;
- (void)_reconfigureGraphicView;
- (void)_resumeLayer:(id)arg1;
- (id)delegate;
- (id)graphicStateController;
- (id)init;
- (bool)isAnimationPaused;
- (void)layoutSubviews;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (id)rootAnimationLayer;
- (void)setAnimationPaused:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGraphicStateController:(id)arg1;
- (void)setRootAnimationLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
