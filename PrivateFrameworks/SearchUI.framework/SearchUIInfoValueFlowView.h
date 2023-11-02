
@interface SearchUIInfoValueFlowView : NUIContainerFlowView <TLKContainerButtonDelegate> {
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    NSMutableArray * _infoValueViews;
    bool  _isExpanded;
    bool  _isFirstValueProminent;
    SearchUIRowModel * _rowModel;
    <SearchUIInfoSizingDelegate> * _sizingDelegate;
    SFInfoTuple * _tuple;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *infoValueViews;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool isFirstValueProminent;
@property (nonatomic, retain) SearchUIRowModel *rowModel;
@property (nonatomic) <SearchUIInfoSizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFInfoTuple *tuple;

- (void).cxx_destruct;
- (void)configureInfoValueView:(id)arg1 withValue:(id)arg2;
- (void)configureShowMoreInfoValueView:(id)arg1 forTuple:(id)arg2;
- (void)didSelectButton:(id)arg1;
- (id)feedbackDelegate;
- (id)infoValueViews;
- (id)init;
- (bool)isExpanded;
- (bool)isFirstValueProminent;
- (id)menuForButton:(id)arg1;
- (void)reloadViews;
- (id)rowModel;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setInfoValueViews:(id)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsFirstValueProminent:(bool)arg1;
- (void)setRowModel:(id)arg1;
- (void)setSizingDelegate:(id)arg1;
- (void)setTuple:(id)arg1;
- (id)sizingDelegate;
- (id)tuple;

@end
