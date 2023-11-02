
@interface HUSymbolIconPickerViewController : UICollectionViewController {
    <HUSymbolIconPickerDelegate> * _delegate;
    NSArray * _iconDescriptors;
    HFImageIconDescriptor * _selectedIconDescriptor;
    UIColor * _selectedTintColor;
}

@property (nonatomic) <HUSymbolIconPickerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *iconDescriptors;
@property (nonatomic, retain) HFImageIconDescriptor *selectedIconDescriptor;
@property (nonatomic, retain) UIColor *selectedTintColor;

+ (long long)indexOfIconDescriptor:(id)arg1 inArray:(id)arg2;
+ (id)sceneIconDescriptors;
+ (id)tintColors;

- (void).cxx_destruct;
- (id)_buildColorTintSectionWithEnvironment:(id)arg1;
- (id)_buildHeaderSectionWithEnvironment:(id)arg1;
- (id)_buildIconPickerSectionWithEnvironment:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)_layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (void)applyTintColor;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)delegate;
- (id)iconDescriptors;
- (id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 selectedTintColor:(id)arg3 delegate:(id)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)selectedIconDescriptor;
- (id)selectedTintColor;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIconDescriptor:(id)arg1;
- (void)setSelectedTintColor:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
