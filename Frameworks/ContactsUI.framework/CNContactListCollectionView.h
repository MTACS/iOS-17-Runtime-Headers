
@interface CNContactListCollectionView : UICollectionView {
    long long  _contactCount;
    CNContactListCountFooterView * _contactCountView;
    NSObject<CNContactListCollectionViewDelegate> * _contactListCollectionViewDelegate;
    NSObject<CNContactListCountViewDelegate> * _countViewDelegate;
    long long  _duplicateCount;
    long long  _selectedCount;
}

@property (nonatomic) long long contactCount;
@property (nonatomic, retain) CNContactListCountFooterView *contactCountView;
@property (nonatomic) NSObject<CNContactListCollectionViewDelegate> *contactListCollectionViewDelegate;
@property (nonatomic) NSObject<CNContactListCountViewDelegate> *countViewDelegate;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;

- (void).cxx_destruct;
- (long long)contactCount;
- (id)contactCountView;
- (id)contactListCollectionViewDelegate;
- (id)countViewDelegate;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (long long)duplicateCount;
- (unsigned long long)globalIndexForItemAtIndexPath:(id)arg1;
- (id)init;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (long long)selectedCount;
- (void)setContactCount:(long long)arg1;
- (void)setContactCountView:(id)arg1;
- (void)setContactListCollectionViewDelegate:(id)arg1;
- (void)setCountViewDelegate:(id)arg1;
- (void)setDuplicateCount:(long long)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)updateSelectedContactCount;

@end
