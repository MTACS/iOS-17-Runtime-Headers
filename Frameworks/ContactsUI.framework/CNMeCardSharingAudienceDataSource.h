
@interface CNMeCardSharingAudienceDataSource : NSObject <CNMeCardSharingSectionDataSource> {
    NSArray * _items;
    CNMeCardSharingRowItem * _selectedItem;
    unsigned long long  _selectedSharingAudience;
    bool  _shouldShowEveryone;
    NSArray * _valuesArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) unsigned long long selectedIndex;
@property (nonatomic, retain) CNMeCardSharingRowItem *selectedItem;
@property (nonatomic) unsigned long long selectedSharingAudience;
@property (nonatomic) bool shouldShowEveryone;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *valuesArray;

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForSharingAudience:(unsigned long long)arg1;
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)numberOfItems;
- (void)reloadItems;
- (id)sectionFooterLabel;
- (id)sectionHeaderLabel;
- (unsigned long long)selectedIndex;
- (id)selectedItem;
- (unsigned long long)selectedSharingAudience;
- (void)setItems:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectedSharingAudience:(unsigned long long)arg1;
- (void)setShouldShowEveryone:(bool)arg1;
- (void)setValuesArray:(id)arg1;
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)arg1;
- (bool)shouldShowEveryone;
- (bool)supportsSelection;
- (id)valuesArray;

@end
