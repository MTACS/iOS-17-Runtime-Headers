
@interface CNContactViewFooterView : UIView {
    CNContact * _contact;
    UILabel * _label;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)contact;
- (id)init;
- (id)label;
- (void)setContact:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setupSubviews;
- (void)updateLabelText;

@end
