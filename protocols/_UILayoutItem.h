
@protocol _UILayoutItem <NSLayoutItem>

@required

- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (void)_faultInGuidesForConstraint:(NSLayoutConstraint *)arg1;
- (NSISVariable *)_minXVariable;
- (NSISVariable *)_minYVariable;
- (void*)_referenceView;
- (NSMutableArray *)_uili_existingBaseFrameVariables;
- (NSMutableArray *)_uili_existingObservationEligibleLayoutVariables;
- (bool)_uili_isFocusGuide;
- (NSISEngine *)_uili_observableLayoutEngineForBaseFrameVariables:(bool)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(bool)arg1;
- (bool)_uili_requiresObservationForVariable:(NSISVariable *)arg1;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1 forVariable:(NSISVariable *)arg2;
- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (bool)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id*)arg4;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_minXVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@optional

- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;

@end
