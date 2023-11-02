
@interface AXCyclingView : UIView {
    unsigned long long  _cycleIndex;
    <AXCyclingViewDelegate> * _delegate;
    bool  _isMakingNextViewVisible;
    bool  _shouldSkipMakingNextViewVisible;
}

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) <AXCyclingViewDelegate> *delegate;
@property (nonatomic) bool isMakingNextViewVisible;
@property (nonatomic) bool shouldSkipMakingNextViewVisible;
@property (nonatomic, readonly) NSArray *viewsInCycle;

- (void).cxx_destruct;
- (void)_makeNextViewVisible;
- (void)_updateForCycleIndex;
- (void)beginCycling;
- (unsigned long long)cycleIndex;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endCycling;
- (bool)isMakingNextViewVisible;
- (void)setCycleIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsMakingNextViewVisible:(bool)arg1;
- (void)setShouldSkipMakingNextViewVisible:(bool)arg1;
- (bool)shouldSkipMakingNextViewVisible;
- (id)viewsInCycle;

@end
