
@interface HUEditableTextCollectionListCell : UICollectionViewListCell <HUDisableableCellProtocol, HUEditableTextCellProtocol> {
    bool  _disabled;
    UIListContentView * _listContentView;
    NSArray * _listContentViewConstraints;
    UITextField * _textField;
    NSArray * _textFieldConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIListContentView *listContentView;
@property (nonatomic, retain) NSArray *listContentViewConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic, retain) NSArray *textFieldConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (id)listContentView;
- (id)listContentViewConstraints;
- (void)prepareForReuse;
- (void)setContentConfiguration:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setListContentView:(id)arg1;
- (void)setListContentViewConstraints:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextFieldConstraints:(id)arg1;
- (id)textField;
- (id)textFieldConstraints;
- (void)updateConstraints;

@end
