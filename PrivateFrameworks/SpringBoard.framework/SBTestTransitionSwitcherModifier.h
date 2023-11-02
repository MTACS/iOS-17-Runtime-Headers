
@interface SBTestTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    double  _delay;
    bool  _shouldAsyncRenderUntilDelay;
}

- (void)setshouldAsyncRenderUntilDelay:(double)arg1;
- (bool)shouldAsyncRenderUntilDelay:(inout double*)arg1;

@end
