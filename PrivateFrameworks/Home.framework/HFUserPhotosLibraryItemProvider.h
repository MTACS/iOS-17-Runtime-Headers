
@interface HFUserPhotosLibraryItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _userPhotosLibraryItems;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSMutableSet *userPhotosLibraryItems;

- (void).cxx_destruct;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setHome:(id)arg1;
- (void)setUserPhotosLibraryItems:(id)arg1;
- (id)userPhotosLibraryItems;

@end
