
@interface TSDCheckableTableViewCell : UITableViewCell {
    bool  mChecked;
    UIImageView * mCheckmarkImageView;
    UIButton * mImageButton;
    bool  mShowsCheckboxOnRight;
}

@property (nonatomic) bool checked;
@property (nonatomic, readonly) bool showsCheckboxOnRight;

- (bool)checked;
- (void)dealloc;
- (id)imageForState:(unsigned long long)arg1;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1 showsCheckboxOnRight:(bool)arg2 style:(long long)arg3;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (void)setCheckmarkImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (bool)showsCheckboxOnRight;

@end
