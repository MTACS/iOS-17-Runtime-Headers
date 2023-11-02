
@interface PSUISIMSubgroup : NSObject <PSSpecifierGroup> {
    NSMutableArray * _bundleControllers;
    PSListController * _listController;
    PSSpecifier * _parentSpecifier;
}

@property (nonatomic, retain) NSMutableArray *bundleControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic) PSSpecifier *parentSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleControllers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (id)listController;
- (id)parentSpecifier;
- (void)setBundleControllers:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setParentSpecifier:(id)arg1;
- (id)specifiers;

@end
