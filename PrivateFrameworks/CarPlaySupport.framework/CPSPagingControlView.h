
@interface CPSPagingControlView : UIView <CPSLinearFocusProviding> {
    UIButton * _nextButton;
    NSNumberFormatter * _numberFormatter;
    unsigned long long  _pageCount;
    unsigned long long  _pageIndex;
    <CPSPageControlling> * _pagingDelegate;
    UILabel * _positionLabel;
    UIButton * _previousButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *nextButton;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) <CPSPageControlling> *pagingDelegate;
@property (nonatomic, retain) UILabel *positionLabel;
@property (nonatomic, retain) UIButton *previousButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (void)_handleNextButton:(id)arg1;
- (void)_handlePreviousButton:(id)arg1;
- (void)_invokeDelegateForPageIndex:(unsigned long long)arg1;
- (id)_linearFocusItems;
- (void)_update;
- (void)_updateImages;
- (void)enablePageControlsIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nextButton;
- (id)numberFormatter;
- (unsigned long long)pageCount;
- (unsigned long long)pageIndex;
- (id)pagingDelegate;
- (id)positionLabel;
- (id)previousButton;
- (void)setNextButton:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setPageCount:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPagingDelegate:(id)arg1;
- (void)setPositionLabel:(id)arg1;
- (void)setPreviousButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
