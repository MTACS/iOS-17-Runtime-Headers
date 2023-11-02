
@interface _UIFocusMovementPerformer : NSObject {
    <_UIFocusMovementPerformerDelegate> * _delegate;
}

@property (nonatomic) <_UIFocusMovementPerformerDelegate> *delegate;

- (void).cxx_destruct;
- (id)__findFocusCandidateInEnvironment:(id)arg1 container:(id)arg2 forRequest:(id)arg3 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 isLoadingScrollableContainer:(bool)arg5;
- (id)_bestCandidateForFocusMovement:(id)arg1;
- (id)_bestCandidateForLinearFocusMovement:(id)arg1;
- (id)_bestCandidateForNonLinearFocusMovement:(id)arg1;
- (id)_environmentContainersToCheckForRequest:(id)arg1;
- (id)_fakeFocusedViewForFocusMovement:(id)arg1 searchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 window:(id)arg3;
- (id)_findFocusCandidateByExhaustivelySearchingEnvironment:(id)arg1 scrollableContainer:(id)arg2 forRequest:(id)arg3;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1;
- (id)_findFocusCandidateWithoutLoadingScrollableContentInEnvironment:(id)arg1 container:(id)arg2 forRequest:(id)arg3 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)_isMovementValidForFocusSequences:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2 shouldLoadScrollableContainer:(bool)arg3;
- (id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)arg1;
- (bool)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1;
- (id)delegate;
- (bool)performFocusMovement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2;

@end
