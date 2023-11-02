
@interface HUCheckmarkCell : HUActivityIndicatorCell {
    bool  _checked;
    UIImage * _checkedImage;
    UIImage * _uncheckedImage;
}

@property (nonatomic) bool checked;
@property (nonatomic, retain) UIImage *checkedImage;
@property (nonatomic, retain) UIImage *uncheckedImage;

- (void).cxx_destruct;
- (bool)checked;
- (id)checkedImage;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setCheckedImage:(id)arg1;
- (void)setUncheckedImage:(id)arg1;
- (id)uncheckedImage;

@end
