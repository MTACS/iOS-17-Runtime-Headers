
@interface PKPassShareIntroductionExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {
    PKPassShareInitiationContext * _context;
    <PKPassShareIntroductionExplanationViewControllerDelegate> * _delegate;
    PKHeroCardExplainationHeaderView * _heroView;
    PKPassSnapshotter * _passSnapshotter;
    PKSharedPassSharesController * _sharesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadCardArt;
- (void)_showShareUI;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)init;
- (id)initWithSharesController:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)loadView;

@end
