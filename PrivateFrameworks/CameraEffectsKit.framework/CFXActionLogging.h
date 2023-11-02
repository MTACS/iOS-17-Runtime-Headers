
@interface CFXActionLogging : NSObject

+ (id)CFX_actionLogDictionaryWithEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;
+ (id)actionLogAsJSONForEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;
+ (id)actionLogAsStringForEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;
+ (id)remainingMemory;

@end
