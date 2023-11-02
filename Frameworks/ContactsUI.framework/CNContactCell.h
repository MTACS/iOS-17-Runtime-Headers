
@interface CNContactCell : UITableViewCell <CNIndentableCell> {
    CNCardGroupItem * _cardGroupItem;
    NSArray * _constantConstraints;
    NSArray * _variableConstraints;
}

@property (nonatomic, retain) CNCardGroupItem *cardGroupItem;
@property (nonatomic, readonly) NSArray *constantConstraints;
@property (nonatomic, readonly) bool hasGapBetweenSeparatorAndTrailingEdge;
@property (nonatomic, readonly) double minCellHeight;
@property (nonatomic) bool showSeparator;
@property (nonatomic, readonly) NSArray *variableConstraints;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (void)_setAnimating:(bool)arg1 clippingAdjacentCells:(bool)arg2;
- (id)cardGroupItem;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (bool)hasGapBetweenSeparatorAndTrailingEdge;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)minCellHeight;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (void)prepareForReuse;
- (void)setCardGroupItem:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (bool)shouldPerformAccessoryAction;
- (bool)shouldPerformDefaultAction;
- (bool)showSeparator;
- (void)updateConstraints;
- (id)variableConstraints;

@end
