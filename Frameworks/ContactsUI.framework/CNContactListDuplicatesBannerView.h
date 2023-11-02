
@interface CNContactListDuplicatesBannerView : UIView {
    <CNContactListDuplicatesBannerViewDelegate> * _delegate;
    long long  _duplicatesCount;
    UILabel * _titleLabel;
}

@property (nonatomic) <CNContactListDuplicatesBannerViewDelegate> *delegate;
@property (nonatomic) long long duplicatesCount;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)countStringForLocalizedStringKey:(id)arg1 count:(long long)arg2;
- (id)delegate;
- (void)didTapDismiss;
- (void)didTapViewDuplicates;
- (long long)duplicatesCount;
- (id)initWithDuplicatesCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuplicatesCount:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupSubviews;
- (id)titleLabel;

@end
