
@interface PXPeopleMeViewController : UIViewController <PXChangeObserver, PXPeopleCandidateBannerViewDelegate> {
    PXPeopleCandidateBannerView * _bannerView;
    <PXPeopleMeViewControllerDataSource> * _dataSource;
    <PXPeopleMeViewControllerDelegate> * _delegate;
    id /* block */  _dismissHandler;
    PXFeatureSpecManager * _specManager;
    <PXPerson> * _suggestedPerson;
}

@property (nonatomic, retain) PXPeopleCandidateBannerView *bannerView;
@property (nonatomic, readonly) <PXPeopleMeViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleMeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXFeatureSpecManager *specManager;
@property (retain) <PXPerson> *suggestedPerson;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_confirmMe:(id)arg1;
- (void)_dismissViewControllerAsConfirmed:(bool)arg1;
- (void)_rejectMe:(id)arg1;
- (id)bannerView;
- (void)bannerViewDidSelectNotNow:(id)arg1;
- (void)bannerViewDidSelectPrimaryAction:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id /* block */)dismissHandler;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 dismissHandler:(id /* block */)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setSpecManager:(id)arg1;
- (void)setSuggestedPerson:(id)arg1;
- (id)specManager;
- (id)suggestedPerson;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
