
@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    UIResponder * _fallbackResponder;
    bool  _justDeleted;
    UIResponder * _previousResponder;
    long long  _selectedIndex;
}

@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateOutput:(id)arg1;
- (id)candidateSet;
- (void)candidatesUpdated;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (bool)hasCandidates;
- (id)init;
- (bool)isDeleteCandidate:(id)arg1;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (id)keyboardBehaviors;
- (id)nextResponder;
- (void)performOutput:(id)arg1;
- (void)reloadInputViews;
- (bool)resignFirstResponder;
- (unsigned long long)selectedSortIndex;
- (void)sendStrokes:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)shouldRestoreResponder;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (id)statisticsIdentifier;

@end
