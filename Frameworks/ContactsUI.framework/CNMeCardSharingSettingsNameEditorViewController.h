
@interface CNMeCardSharingSettingsNameEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    NSArray * _textFields;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *textFields;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)doneTapped;
- (id)initWithTextFields:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setTextFields:(id)arg1;
- (void)setUpCollectionView;
- (id)textFields;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
