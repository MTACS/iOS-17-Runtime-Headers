
@interface PKPassGroupViewCollectionViewCell : PKDashboardCollectionViewCell {
    PKPassGroupView * _groupView;
}

@property (nonatomic, retain) PKPassGroupView *groupView;

- (void).cxx_destruct;
- (id)groupView;
- (void)layoutSubviews;
- (void)setGroupView:(id)arg1;

@end
