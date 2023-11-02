
@interface CNContactListDuplicatesBannerCell : UICollectionViewListCell <CNContactListDuplicatesBannerViewDelegate> {
    CNContactListStyleApplier * _contactListStyleApplier;
    <CNContactListDuplicatesBannerCellDelegate> * _delegate;
    CNContactListDuplicatesBannerView * _duplicatesBannerView;
    long long  _duplicatesCount;
    unsigned long long  _state;
}

@property (nonatomic, retain) CNContactListStyleApplier *contactListStyleApplier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListDuplicatesBannerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactListDuplicatesBannerView *duplicatesBannerView;
@property (nonatomic) long long duplicatesCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactListStyleApplier;
- (id)delegate;
- (id)duplicatesBannerView;
- (void)duplicatesBannerViewDidTapDismiss:(id)arg1;
- (void)duplicatesBannerViewDidTapViewDuplicates:(id)arg1;
- (long long)duplicatesCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeBannerView;
- (void)setContactListStyleApplier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicatesBannerView:(id)arg1;
- (void)setDuplicatesCount:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)updateText:(id)arg1;
- (void)updateWithCount:(long long)arg1;
- (void)updateWithDuplicatesFoundBannerWithCount:(long long)arg1;
- (void)updateWithState:(unsigned long long)arg1;

@end
