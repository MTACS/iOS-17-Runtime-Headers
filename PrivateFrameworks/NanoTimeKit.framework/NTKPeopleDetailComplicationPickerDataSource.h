
@interface NTKPeopleDetailComplicationPickerDataSource : NSObject <UITableViewDataSource> {
    CNContactStoreDataSource * _allContactsDataSource;
    NSArray * _allFavoriteContacts;
    NTKComplicationPickerDetailViewConfiguration * _configuration;
    NTKCFaceDetailComplicationCellProvider * _pickerCellProvider;
    UITableView * _tableView;
}

@property (nonatomic, readonly) CNContactStoreDataSource *allContactsDataSource;
@property (nonatomic, readonly) NSArray *allFavoriteContacts;
@property (nonatomic, readonly) NTKComplicationPickerDetailViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NTKCFaceDetailComplicationCellProvider *pickerCellProvider;
@property (nonatomic, readonly) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)_descriptorForRequiredKeysWithDescription:(id)arg1;
+ (id)_newDataSourceWithName:(id)arg1;
+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)_allContactsSections;
- (id)_allFavoriteContactsSorted;
- (id)_contactAtIndexPath:(id)arg1;
- (long long)_contactIndexForIdentifier:(id)arg1 inContactList:(id)arg2;
- (void)_contactStoreChanged:(id)arg1;
- (void)_favoritesChanged:(id)arg1;
- (bool)_favoritesSectionNeeded;
- (id)_indexPathForIdentifier:(id)arg1;
- (bool)_isFavoriteAtIndexPath:(id)arg1;
- (bool)_itemIsSelectedAtIndexPath:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (void)_reloadData;
- (long long)_sectionForTitleIndex:(long long)arg1;
- (id)_sectionIndexTitles;
- (long long)_totalSectionCount;
- (id)allContactsDataSource;
- (id)allFavoriteContacts;
- (long long)collectionView:(id)arg1 sectionForSectionTitleIndex:(long long)arg2;
- (id)complicationItemForIndexPath:(id)arg1;
- (id)configuration;
- (id)initWithTableView:(id)arg1 detailConfiguration:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerCellProvider;
- (id)sectionIndexTitlesForCollectionView:(id)arg1;
- (id)selectedIndexPath;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
