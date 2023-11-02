
@interface PUSyndicationAttributionTileViewController : PUTileViewController <SLAttributionViewDelegate> {
    PUAssetViewModel * _assetViewModel;
    SLAttributionView * _attributionView;
    <PUSyndicationAttributionTileViewControllerDelegate> * _delegate;
    SLHighlight * _highlight;
    double  _occupiedLeadingWidth;
}

@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, retain) SLAttributionView *attributionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSyndicationAttributionTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SLHighlight *highlight;
@property (nonatomic) double occupiedLeadingWidth;
@property (nonatomic, readonly) UIView *pillView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleHighlight:(id)arg1 withAssetUUID:(id)arg2;
- (void)_invalidateAttributionView;
- (void)_setupAttributionView;
- (void)_updateAttributionView;
- (id)assetViewModel;
- (id)attributionView;
- (void)becomeReusable;
- (id)contextMenuItemsForAttributionView:(id)arg1;
- (id)delegate;
- (void)didChangeVisibleRect;
- (id)highlight;
- (id)loadView;
- (double)occupiedLeadingWidth;
- (id)pillView;
- (void)setAssetViewModel:(id)arg1;
- (void)setAttributionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setOccupiedLeadingWidth:(double)arg1;
- (bool)wantsVisibleRectChanges;

@end
