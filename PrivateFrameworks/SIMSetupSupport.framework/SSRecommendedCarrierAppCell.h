
@interface SSRecommendedCarrierAppCell : UITableViewCell {
    ASCLockupView * _lockupView;
    ASCLockupRequest * _request;
}

@property (nonatomic, retain) ASCLockupView *lockupView;

+ (id)sharedLockupViewGroup;

- (void).cxx_destruct;
- (id)_dummyArtwork;
- (id)_dummyLockup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)lockupView;
- (void)prepareForReuse;
- (void)setLockupRequest:(id)arg1 withDelegate:(id)arg2;
- (void)setLockupView:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
