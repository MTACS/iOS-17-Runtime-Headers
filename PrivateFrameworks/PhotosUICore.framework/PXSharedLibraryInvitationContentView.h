
@interface PXSharedLibraryInvitationContentView : UIView {
    UIImageView * _badgeView;
    UIImageView * _imageView;
    <PXSharedLibraryParticipant> * _owner;
    UILabel * _textLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) <PXSharedLibraryParticipant> *owner;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createCombinedImage:(id)arg1 displayScale:(double)arg2 isRTL:(bool)arg3;
- (void)_updateImageViewWithImage:(id)arg1 owner:(id)arg2;
- (void)_updateTextLabel;
- (void)_updateTitleLabel;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)textLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
