
@interface SXVisibilityMonitor : NSObject <SXVisibilityMonitoring, SXVisibilityReporting> {
    bool  _appeared;
    NFStateMachineState * _appearedState;
    NFStateMachineState * _appearingState;
    NSMutableArray * _didAppearBlocks;
    NSMutableArray * _didDisappearBlocks;
    NFStateMachineState * _disappearedState;
    NFStateMachineState * _disappearingState;
    long long  _lockCount;
    id  _object;
    unsigned long long  _state;
    NFStateMachine * _stateMachine;
    double  _visiblePercentage;
    NSMutableArray * _visiblePercentageBlocks;
    <SXVisiblePercentageProviding> * _visiblePercentageProvider;
    NSMutableArray * _willAppearBlocks;
    NSMutableArray * _willDisappearBlocks;
}

@property (nonatomic, readonly) bool appeared;
@property (nonatomic, readonly) NFStateMachineState *appearedState;
@property (nonatomic, readonly) NFStateMachineState *appearingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *didAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *didDisappearBlocks;
@property (nonatomic, readonly) NFStateMachineState *disappearedState;
@property (nonatomic, readonly) NFStateMachineState *disappearingState;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lockCount;
@property (nonatomic, readonly) bool locked;
@property (nonatomic, readonly) id object;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic) double visiblePercentage;
@property (nonatomic, readonly) NSMutableArray *visiblePercentageBlocks;
@property (nonatomic, readonly) <SXVisiblePercentageProviding> *visiblePercentageProvider;
@property (nonatomic, readonly) NSMutableArray *willAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *willDisappearBlocks;

- (void).cxx_destruct;
- (bool)appeared;
- (id)appearedState;
- (id)appearingState;
- (void)determineVisiblePercentage;
- (void)didAppear;
- (id)didAppearBlocks;
- (void)didDisappear;
- (id)didDisappearBlocks;
- (id)disappearedState;
- (id)disappearingState;
- (id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2;
- (void)lock;
- (long long)lockCount;
- (bool)locked;
- (id)object;
- (void)onDidAppear:(id /* block */)arg1;
- (void)onDidDisappear:(id /* block */)arg1;
- (void)onVisiblePercentageChange:(id /* block */)arg1;
- (void)onWillAppear:(id /* block */)arg1;
- (void)onWillDisappear:(id /* block */)arg1;
- (void)setLockCount:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setVisiblePercentage:(double)arg1;
- (unsigned long long)state;
- (id)stateMachine;
- (void)unlock;
- (void)updateVisibility;
- (double)visiblePercentage;
- (id)visiblePercentageBlocks;
- (id)visiblePercentageProvider;
- (void)willAppear;
- (id)willAppearBlocks;
- (void)willDisappear;
- (id)willDisappearBlocks;

@end
