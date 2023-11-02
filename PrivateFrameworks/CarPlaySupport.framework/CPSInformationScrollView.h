
@interface CPSInformationScrollView : UIScrollView {
    NSMutableArray * _focusWaypoints;
    <CPSInformationScrollViewDelegate> * _scrollviewDelegate;
}

@property (nonatomic, retain) NSMutableArray *focusWaypoints;
@property (nonatomic) <CPSInformationScrollViewDelegate> *scrollviewDelegate;

- (void).cxx_destruct;
- (id)focusWaypoints;
- (id)scrollviewDelegate;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFocusWaypoints:(id)arg1;
- (void)setScrollviewDelegate:(id)arg1;

@end
