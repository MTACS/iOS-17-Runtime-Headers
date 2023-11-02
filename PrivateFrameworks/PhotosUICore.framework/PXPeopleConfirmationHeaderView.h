
@interface PXPeopleConfirmationHeaderView : UICollectionReusableView {
    <PXPerson> * _person;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (struct CGSize { double x1; double x2; })_sizeForString:(id)arg1 width:(double)arg2 multiline:(bool)arg3 font:(id)arg4;
+ (id)_titleFont;
+ (struct CGSize { double x1; double x2; })sizeForTitle:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_setupHeader;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)person;
- (void)prepareForReuse;
- (void)setPerson:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
