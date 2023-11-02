
@interface PXGadgetAnchorHelper : NSObject {
    long long  _anchorPosition;
    <PXGadget> * _currentAnchor;
    PXGadgetDataSourceManager * _dataSourceManager;
    <PXGadgetAnchorHelperDelegate> * _delegate;
    PXGadgetNavigationHelper * _navigationHelper;
}

@property (nonatomic) long long anchorPosition;
@property (nonatomic, retain) <PXGadget> *currentAnchor;
@property (nonatomic, retain) PXGadgetDataSourceManager *dataSourceManager;
@property (nonatomic) <PXGadgetAnchorHelperDelegate> *delegate;
@property (nonatomic, readonly) bool hasAnchor;
@property (nonatomic, retain) PXGadgetNavigationHelper *navigationHelper;

- (void).cxx_destruct;
- (id)_convertIndexPathToGadget:(id)arg1;
- (id)_generateAnchor;
- (long long)anchorPosition;
- (void)clearAnchor;
- (id)currentAnchor;
- (id)dataSourceManager;
- (id)delegate;
- (bool)hasAnchor;
- (id)initWithNavigationHelper:(id)arg1 dataSourceManager:(id)arg2;
- (void)navigateToAnchorIfNeeded;
- (id)navigationHelper;
- (void)saveAnchor;
- (void)saveGadgetAsAnchor:(id)arg1;
- (void)setAnchorPosition:(long long)arg1;
- (void)setCurrentAnchor:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationHelper:(id)arg1;

@end
