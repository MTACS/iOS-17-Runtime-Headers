
@interface UPContextualizerUtilities : NSObject

+ (id)buildPayloadResultFromQuery:(id)arg1 modelIdentifier:(id)arg2 intent:(id)arg3 entityName:(id)arg4 serializer:(id)arg5;
+ (id)createConfirmOrRejectedDialogActsFor:(id)arg1 reference:(id)arg2;
+ (id)entityLabelsFromCandidate:(id)arg1;
+ (id)filterResult:(id)arg1 byEntityName:(id)arg2 serializer:(id)arg3;
+ (id)filterResult:(id)arg1 serializer:(id)arg2 predicate:(id /* block */)arg3;
+ (bool)hasTopCandidate:(id)arg1 excedingProbability:(double)arg2 matchingOneOfIntents:(id)arg3;
+ (id)resultFromResult:(id)arg1 withNewIntent:(id)arg2;

@end
