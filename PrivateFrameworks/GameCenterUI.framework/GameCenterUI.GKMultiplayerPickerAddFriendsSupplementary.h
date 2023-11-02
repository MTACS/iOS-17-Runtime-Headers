
@interface GameCenterUI.GKMultiplayerPickerAddFriendsSupplementary : UICollectionReusableView {
    void lockupView;
}

@property (nonatomic, copy) id /* block */ addFriendsHandler;

+ (double)preferredHeightFitting:(struct CGSize { double x1; double x2; })arg1 inTraitEnvironment:(id)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id /* block */)addFriendsHandler;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAddFriendsHandler:(id /* block */)arg1;

@end
