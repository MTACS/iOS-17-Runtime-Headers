
@interface _PXAlbumSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader> {
    bool  _alwaysWantsBackground;
    bool  _areAllItemsSelected;
    PXAssetsDataSource * _dataSource;
    <_PXAlbumSectionHeaderLayoutInteractionDelegate> * _interactionDelegate;
    bool  _isInSelectMode;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    PXSelectionSnapshot * _selectionSnapshot;
    PXPhotosLayoutSpec * _spec;
    <PXPhotosSectionHeaderLayoutViewProvider> * _viewProvider;
    bool  _wantsBackground;
}

@property (nonatomic) bool alwaysWantsBackground;
@property (nonatomic, readonly) bool areAllItemsSelected;
@property (nonatomic, retain) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_PXAlbumSectionHeaderLayoutInteractionDelegate> *interactionDelegate;
@property (nonatomic) bool isInSelectMode;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, retain) PXPhotosLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic) <PXPhotosSectionHeaderLayoutViewProvider> *viewProvider;
@property (nonatomic, readonly) bool wantsBackground;

- (void).cxx_destruct;
- (void)_setAreAllItemsSelected:(bool)arg1;
- (void)_setWantsBackground:(bool)arg1;
- (void)_updateWantsBackground;
- (bool)alwaysWantsBackground;
- (bool)areAllItemsSelected;
- (id)dataSource;
- (void)didTapHeaderView:(id)arg1;
- (void)floatingOffsetDidChange;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (id)interactionDelegate;
- (bool)isInSelectMode;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (id)selectionSnapshot;
- (void)setAlwaysWantsBackground:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setViewProvider:(id)arg1;
- (id)spec;
- (void)textSizeDidChangeForHeaderView:(id)arg1;
- (id)viewProvider;
- (bool)wantsBackground;

@end
