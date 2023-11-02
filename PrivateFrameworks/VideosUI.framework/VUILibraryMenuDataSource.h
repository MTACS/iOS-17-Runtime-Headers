
@interface VUILibraryMenuDataSource : VUILibraryDataSource {
    VUIMenuDataSource * _menuItems;
    NSSet * _validCategories;
}

@property (nonatomic, retain) VUIMenuDataSource *menuItems;
@property (nonatomic, retain) NSSet *validCategories;

- (void).cxx_destruct;
- (id)initWithValidCategories:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (void)setValidCategories:(id)arg1;
- (id)validCategories;

@end
