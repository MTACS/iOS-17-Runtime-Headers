
@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewController : NCSupplementaryViewPrototypeRecipeViewController <NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)title;

- (id)init;
- (void)loadView;
- (void)unmanagedContentViewControllerView:(id)arg1 setContainsUnmanagedContent:(bool)arg2;

@end
