
@interface _PXContentSyndicationSectionHeaderLayout : PXGSingleViewLayout <PXContentSyndicationSectionHeaderViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXPhotosSectionedLayoutHeader> {
    PXAssetCollectionActionManager * _assetCollectionManager;
    PXAssetsDataSource * _dataSource;
    bool  _isInSelectMode;
    <PXDisplayAsset> * _referenceAssetForHighlight;
    PXContentSyndicationSectionHeaderView * _sectionHeaderContentView;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    PXSelectionSnapshot * _selectionSnapshot;
    SLHighlight * _socialLayerHighlight;
    <PXContentSyndicationSocialLayerHighlightProvider> * _socialLayerHighlightProvider;
    PXPhotosLayoutSpec * _spec;
}

@property (nonatomic, retain) PXAssetCollectionActionManager *assetCollectionManager;
@property (nonatomic, retain) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInSelectMode;
@property (nonatomic, retain) <PXDisplayAsset> *referenceAssetForHighlight;
@property (nonatomic, retain) PXContentSyndicationSectionHeaderView *sectionHeaderContentView;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, retain) SLHighlight *socialLayerHighlight;
@property (nonatomic, readonly) <PXContentSyndicationSocialLayerHighlightProvider> *socialLayerHighlightProvider;
@property (nonatomic, retain) PXPhotosLayoutSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateReferenceAssetForHighlightIfNeeded;
- (id)additionalContextMenuActionsForAttributionViewInContentSyndicationHeaderView:(id)arg1;
- (id)assetCollectionManager;
- (id)dataSource;
- (id)init;
- (id)initWithSpec:(id)arg1 socialLayerHighlightProvider:(id)arg2;
- (bool)isInSelectMode;
- (id)referenceAssetForHighlight;
- (id)sectionHeaderContentView;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (id)selectionSnapshot;
- (void)setAssetCollectionManager:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setReferenceAssetForHighlight:(id)arg1;
- (void)setSectionHeaderContentView:(id)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setSocialLayerHighlight:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)socialLayerHighlight;
- (id)socialLayerHighlightProvider;
- (void)socialLayerHighlightProvider:(id)arg1 didChangeSocialLayerHighlight:(id)arg2 forAsset:(id)arg3;
- (id)spec;

@end
