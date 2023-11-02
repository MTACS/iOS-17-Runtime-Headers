
@interface CNSharingProfileOnboardingHeaderView : UICollectionReusableView {
    OBHeaderView * _headerView;
}

@property (nonatomic, retain) OBHeaderView *headerView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)headerView;
- (id)initWithTitle:(id)arg1;
- (id)reuseIdentifier;
- (void)setHeaderView:(id)arg1;

@end
