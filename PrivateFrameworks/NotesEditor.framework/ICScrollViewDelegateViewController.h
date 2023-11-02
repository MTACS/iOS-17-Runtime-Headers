
@interface ICScrollViewDelegateViewController : ICNAViewController <ICScrollViewKeyboardResizerDelegate, UIScrollViewDelegate> {
    ICScrollViewKeyboardResizer * _scrollViewResizer;
}

@property (nonatomic, readonly) NotesBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *keyboardResizerScrollView;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundView;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (id)keyboardResizerScrollView;
- (id)scrollView;
- (id)scrollViewResizer;
- (void)setScrollViewResizer:(id)arg1;
- (void)setupScrollViewKeyboardResizer;
- (double)topInsetForResizer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
