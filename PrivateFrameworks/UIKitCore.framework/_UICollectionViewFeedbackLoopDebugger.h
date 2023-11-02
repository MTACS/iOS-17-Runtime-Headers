
@interface _UICollectionViewFeedbackLoopDebugger : NSObject {
    void currentlyTrackedChangeRecords;
    void invalidationRecords;
    void updateVisibleCellsRecords;
}

- (void).cxx_destruct;
- (id)init;
- (void)printCollectedRecordsAndRaiseException:(id)arg1;
- (void)recordCollectionViewInsetsPropertyChange:(id)arg1 fromInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 toInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)recordCollectionViewRectPropertyChange:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)recordGenericChangeWithMessage:(id)arg1;
- (void)recordInvalidationWithContext:(id)arg1;
- (void)recordPreferredAttributesChangeForElementWithAttributes:(id)arg1 reason:(id)arg2 changedAttribute:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 layoutGeneratedValue:(id)arg6;
- (void)recordUpdateVisibleCellsScheduledWithCallStack:(id)arg1;

@end
