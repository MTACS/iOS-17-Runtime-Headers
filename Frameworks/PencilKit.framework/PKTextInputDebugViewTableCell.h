
@interface PKTextInputDebugViewTableCell : UITableViewCell {
    UIButton * __detailsButton;
    UILabel * __titleLabel;
    UILabel * __valueLabel;
    <PKTextInputDebugViewTableCellDelegate> * _delegate;
    bool  _showDetailsButton;
    NSString * _statusKey;
    NSString * _titleText;
    NSAttributedString * _valueAttributedText;
}

@property (nonatomic, retain) UIButton *_detailsButton;
@property (nonatomic, retain) UILabel *_titleLabel;
@property (nonatomic, retain) UILabel *_valueLabel;
@property (nonatomic) <PKTextInputDebugViewTableCellDelegate> *delegate;
@property (nonatomic) bool showDetailsButton;
@property (nonatomic, copy) NSString *statusKey;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSAttributedString *valueAttributedText;

- (void).cxx_destruct;
- (id)_detailsButton;
- (void)_handleDetailsButton:(id)arg1;
- (void)_setupContentViewsIfNeeded;
- (id)_titleLabel;
- (void)_updateLabels;
- (id)_valueLabel;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setShowDetailsButton:(bool)arg1;
- (void)setStatusKey:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setValueAttributedText:(id)arg1;
- (void)set_detailsButton:(id)arg1;
- (void)set_titleLabel:(id)arg1;
- (void)set_valueLabel:(id)arg1;
- (bool)showDetailsButton;
- (id)statusKey;
- (id)titleText;
- (id)valueAttributedText;

@end
