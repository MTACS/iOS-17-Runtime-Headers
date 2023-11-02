
@interface FAMugshotMarqueeView : UIView {
    UIStackView * _marquee;
    NSMutableDictionary * _memberPhotoMap;
    id /* block */  _membersFilter;
    FAProfilePictureStore * _pictureStore;
}

+ (id)imageWithMemberFilter:(id /* block */)arg1 profilePictureStore:(id)arg2;

- (void).cxx_destruct;
- (id)_configureImageViewWithImage:(id)arg1;
- (id)_configureImageWithData:(id)arg1;
- (void)_configureMarquee;
- (void)_configureStackView;
- (void)_profilePictureStoreDidReloadImages:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1 profilePictureStore:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMemberFilter:(id /* block */)arg1 profilePictureStore:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
