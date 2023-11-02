
@interface MUPlaceTilesListView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate> {
    <MUPlaceTilesListViewDelegate> * _listFeedbackDelegate;
    NSArray * _viewModels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUPlaceTilesListViewDelegate> *listFeedbackDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewModels;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateAppearance;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)listFeedbackDelegate;
- (void)setListFeedbackDelegate:(id)arg1;
- (void)setViewModels:(id)arg1;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)verticalCardContainerView:(id)arg1 shouldHighlightRowAtIndex:(unsigned long long)arg2;
- (id)viewModels;

@end
