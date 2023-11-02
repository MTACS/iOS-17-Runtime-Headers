
@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable> {
    UIButton * _actionButton;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)actionButton;
- (void)addAllPhotosTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActionButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
