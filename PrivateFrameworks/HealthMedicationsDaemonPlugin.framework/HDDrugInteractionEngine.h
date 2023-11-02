
@interface HDDrugInteractionEngine : NSObject

+ (bool)interactionClassForLifestyleFactor:(unsigned long long)arg1 profile:(id)arg2 interactionClassOut:(id*)arg3 error:(id*)arg4;
+ (id)interactionClassesForConceptWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)interactionClassesForMedication:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)interactionResultForFirstInteractionClass:(id)arg1 secondInteractionClass:(id)arg2 profile:(id)arg3 interactionResultOut:(id*)arg4 error:(id*)arg5;
+ (bool)interactionResultForFirstMedication:(id)arg1 secondMedication:(id)arg2 profile:(id)arg3 interactionResultOut:(id*)arg4 error:(id*)arg5;
+ (bool)interactionResultForMedication:(id)arg1 lifestyleFactor:(unsigned long long)arg2 profile:(id)arg3 interactionResultOut:(id*)arg4 error:(id*)arg5;
+ (id)interactionResultsForInteractionClasses:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)interactionResultsForMedications:(id)arg1 lifestyleFactors:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)numberOfInteractionsForConceptWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)numberOfInteractionsForMedication:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
