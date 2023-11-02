
@interface ScrollTestProcessor : ContentInteractionTestRunner {
    int  _scrollDelta;
    bool  _startedScrollTest;
}

@property (nonatomic) int scrollDelta;
@property (nonatomic) bool startedScrollTest;

- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (bool)performActionForPage:(id)arg1;
- (int)scrollDelta;
- (void)setScrollDelta:(int)arg1;
- (void)setStartedScrollTest:(bool)arg1;
- (bool)startPageAction:(id)arg1;
- (bool)startedScrollTest;

@end
