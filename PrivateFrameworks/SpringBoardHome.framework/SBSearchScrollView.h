
@interface SBSearchScrollView : UIScrollView {
    <SBSearchScrollViewDelegate> * _searchDelegate;
}

@property (nonatomic) <SBSearchScrollViewDelegate> *searchDelegate;

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)searchDelegate;
- (void)setSearchDelegate:(id)arg1;

@end
