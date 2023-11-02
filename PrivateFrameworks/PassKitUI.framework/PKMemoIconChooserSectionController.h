
@interface PKMemoIconChooserSectionController : NSObject <PKDynamicSectionController, PKMemoIconCellDelegate> {
    PKMemoItem * _addNewItem;
    <PKMemoIconChooserSectionControllerDelegate> * _delegate;
    NSMutableArray * _items;
    unsigned long long  _mode;
    PKMemoItem * _selectionItem;
    unsigned long long  _style;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (double)_itemSizeForStyle:(unsigned long long)arg1;
+ (double)_minimumWidthForStyle:(unsigned long long)arg1;
+ (unsigned long long)suggestedStyleForAvailableWidth:(double)arg1;

- (void).cxx_destruct;
- (double)_selectionPreviewBottomSpacing;
- (double)_selectionPreviewTopSpacing;
- (void)addMemo:(id)arg1;
- (void)cell:(id)arg1 didUpdateText:(id)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)contextMenuConfigurationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2 memo:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)reloadItems;
- (id)selectedMemo;
- (void)setMemoSelection:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (unsigned long long)style;

@end
