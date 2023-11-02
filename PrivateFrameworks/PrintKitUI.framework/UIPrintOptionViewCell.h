
@interface UIPrintOptionViewCell : UIPrintOptionCell {
    <UIPrintOptionViewDelegate> * _optionViewDelegate;
    UIView * _printOptionView;
}

@property (nonatomic) <UIPrintOptionViewDelegate> *optionViewDelegate;
@property (nonatomic, retain) UIView *printOptionView;

- (void).cxx_destruct;
- (id)optionViewDelegate;
- (void)prepareForReuse;
- (void)printOptionCellTapped;
- (id)printOptionView;
- (void)setOptionViewDelegate:(id)arg1;
- (void)setPrintOptionView:(id)arg1;

@end
