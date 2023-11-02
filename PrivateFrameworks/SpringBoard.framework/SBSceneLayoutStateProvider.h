
@interface SBSceneLayoutStateProvider : NSObject {
    SBMainDisplayLayoutState * _layoutState;
    SBMainDisplayLayoutState * _previousLayoutState;
}

@property (nonatomic, retain) SBMainDisplayLayoutState *layoutState;
@property (nonatomic, retain) SBMainDisplayLayoutState *previousLayoutState;

- (void).cxx_destruct;
- (id)initWithLayoutState:(id)arg1;
- (id)layoutState;
- (id)previousLayoutState;
- (void)setLayoutState:(id)arg1;
- (void)setPreviousLayoutState:(id)arg1;

@end
