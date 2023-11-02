
@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell {
    UIImageView * _chevron;
    bool  _showsChevron;
    UITextField * _textField;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic) bool showsChevron;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, readonly) NSArray *textFields;

+ (id)cellIdentifier;
+ (Class)containerViewClass;

- (void).cxx_destruct;
- (id)chevron;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)newTextField;
- (void)prepareForReuse;
- (void)setChevron:(id)arg1;
- (void)setShowsChevron:(bool)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setupTextFields;
- (bool)showsChevron;
- (id)textAttributes;
- (id)textField;
- (id)textFields;
- (void)updateMargins;

@end
