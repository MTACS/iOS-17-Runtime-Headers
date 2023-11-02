
@interface STSCategoryTitleTableViewCell : UITableViewCell {
    UIButton * _clearButton;
    bool  _clearButtonHidden;
    STSCategoryResult * _result;
    <STSCategoryTitleTableViewCellDelegate> * _selectionDelegate;
}

@property (nonatomic) bool clearButtonHidden;
@property (nonatomic, retain) STSCategoryResult *result;
@property (nonatomic) <STSCategoryTitleTableViewCellDelegate> *selectionDelegate;

- (void).cxx_destruct;
- (bool)clearButtonHidden;
- (void)clearButtonPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)result;
- (id)selectionDelegate;
- (void)setClearButtonHidden:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;

@end
