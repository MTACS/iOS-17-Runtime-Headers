
@interface SBTraitsOrientedContentViewController : SBFTouchPassThroughViewController {
    id /* block */  _actuateAlongsideBlock;
    TRAParticipant * _containerParticipant;
    TRAParticipant * _contentParticipant;
}

@property (nonatomic, copy) id /* block */ actuateAlongsideBlock;
@property (nonatomic) TRAParticipant *containerParticipant;
@property (nonatomic) TRAParticipant *contentParticipant;
@property (nonatomic, retain) SBTraitsOrientedContentViewControllerView *view;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id /* block */)actuateAlongsideBlock;
- (id)containerParticipant;
- (id)contentParticipant;
- (void)loadView;
- (void)setActuateAlongsideBlock:(id /* block */)arg1;
- (void)setContainerParticipant:(id)arg1;
- (void)setContentParticipant:(id)arg1;
- (void)updateOrientationIfNeeded;
- (id)view;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
