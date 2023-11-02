
@interface SearchUIButtonItemProvider : NSObject <NUIContainerViewDelegate> {
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    UIView * _fillerView;
    NSMutableDictionary * _viewTypeToButtonList;
    NSMutableArray * _visibleButtonItems;
}

@property (readonly) NSArray *buttonItemViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (nonatomic, retain) UIView *fillerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *viewTypeToButtonList;
@property (nonatomic, retain) NSMutableArray *visibleButtonItems;

+ (void)commandButtons:(id)arg1 iterator:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)buttonItemViews;
- (bool)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)feedbackDelegate;
- (id)fillerView;
- (id)initWithRowModel:(id)arg1 itemProvider:(id)arg2 feedbackDelegate:(id)arg3;
- (void)makeButtonsCompact;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setFillerView:(id)arg1;
- (void)setViewTypeToButtonList:(id)arg1;
- (void)setVisibleButtonItems:(id)arg1;
- (id)viewTypeToButtonList;
- (id)visibleButtonItems;

@end
