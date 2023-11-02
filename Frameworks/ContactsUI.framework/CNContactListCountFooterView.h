
@interface CNContactListCountFooterView : UICollectionViewListCell {
    long long  _contactCount;
    NSObject<CNContactListCountViewDelegate> * _delegate;
    long long  _duplicateCount;
    long long  _selectedCount;
}

@property (nonatomic) long long contactCount;
@property (nonatomic) NSObject<CNContactListCountViewDelegate> *delegate;
@property (nonatomic) long long duplicateCount;
@property (nonatomic) long long selectedCount;

- (void).cxx_destruct;
- (long long)contactCount;
- (id)countStringForLocalizedStringKey:(id)arg1 count:(long long)arg2;
- (id)countViewConfiguration;
- (id)delegate;
- (void)didSelectViewAllDuplicates;
- (long long)duplicateCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryText;
- (id)secondaryText;
- (long long)selectedCount;
- (void)setContactCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicateCount:(long long)arg1;
- (void)setSelectedCount:(long long)arg1;
- (bool)shouldDisplayContactCount;
- (bool)shouldDisplayDuplicateCount;
- (bool)shouldDisplaySelectedCount;

@end
