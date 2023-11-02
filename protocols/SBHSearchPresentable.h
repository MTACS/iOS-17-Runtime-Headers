
@protocol SBHSearchPresentable

@required

- (double)maxPresentationOffset;
- (void)setMaxPresentationOffset:(double)arg1;
- (void)setTopOffset:(double)arg1;
- (double)topOffset;
- (void)updatePresentationProgress:(double)arg1 withOffset:(double)arg2 velocity:(double)arg3 presentationState:(long long)arg4;
- (id /* block */)willBeginModifyingPresentationProgressForState:(void *)arg1 animated:(void *)arg2 needsInitialLayout:(void *)arg3; // needs 3 arg types, found 7: id /* block */, void*, id, SEL, long long, bool, bool*

@end
