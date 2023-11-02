
@interface TRICustomTargetingPredicateLanguage : TRIPBMessage

@property (nonatomic) bool hasPredicateGroup;
@property (nonatomic, retain) TRIGroupedPredicate *predicateGroup;

+ (id)descriptor;

@end
