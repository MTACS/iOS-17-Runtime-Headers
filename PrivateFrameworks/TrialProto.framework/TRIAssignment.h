
@interface TRIAssignment : TRIPBMessage

@property (nonatomic, retain) TRIBackgroundMLTaskAssignmentLanguage *backgroundMlTaskLanguage;
@property (nonatomic, retain) TRICoreMLAssignmentLanguage *coremlLanguage;
@property (nonatomic, retain) TRICustomTargetingPredicateLanguage *customTargetingLanguage;
@property (nonatomic, readonly) int languageOneOfCase;
@property (nonatomic, retain) TRINSExpressionAssignmentLanguage *nsexpressionLanguage;
@property (nonatomic, retain) TRIPlanOutAssignmentLanguage *planoutLanguage;
@property (nonatomic, retain) TRIRolloutAssignmentLanguage *rolloutLanguage;
@property (nonatomic, retain) TRIUIAssignmentLanguage *uiLanguage;

+ (id)descriptor;

@end
