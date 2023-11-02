
@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <CKSearchResultSupplementryCell, UITableViewDataSource, UITableViewDelegate> {
    CALayer * _bottomHairline;
    <CKDetailsSearchResultsFooterCellDelegate> * _delegate;
    NSString * _sectionIdentifier;
    unsigned long long  _sectionIndex;
    UITableView * _tableView;
    NSString * _title;
    CALayer * _topHairline;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (nonatomic, retain) CALayer *bottomHairline;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKDetailsSearchResultsFooterCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) unsigned long long sectionIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) CALayer *topHairline;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (id)bottomHairline;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)sectionIdentifier;
- (unsigned long long)sectionIndex;
- (void)setBottomHairline:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopHairline:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)title;
- (id)topHairline;

@end
