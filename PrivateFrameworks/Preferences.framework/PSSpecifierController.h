
@interface PSSpecifierController : NSObject {
    NSMutableArray * _bundleControllers;
    NSMutableArray * _groups;
    PSSpecifier * _specifier;
    NSMutableArray * _specifiers;
    UIViewController<PSSpecifierControllerDelegate> * _viewController;
}

@property (nonatomic, retain) NSMutableArray *bundleControllers;
@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) NSMutableArray *specifiers;
@property (nonatomic) UIViewController<PSSpecifierControllerDelegate> *viewController;

- (void).cxx_destruct;
- (id)_createGroupIndices:(id)arg1;
- (bool)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;
- (id)bundleControllers;
- (void)createGroupIndices;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3;
- (bool)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3;
- (id)groups;
- (long long)indexForIndexPath:(id)arg1;
- (long long)indexOfGroup:(long long)arg1;
- (id)init;
- (id)loadSpecifiers;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)prepareSpecifiersMetadata;
- (id)readPreferenceValue:(id)arg1;
- (void)reloadSpecifiers;
- (void)setBundleControllers:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)specifier;
- (id)specifierAtIndex:(long long)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (id)specifierForID:(id)arg1;
- (id)specifiers;
- (id)viewController;
- (void)viewWillAppear:(bool)arg1;

@end
