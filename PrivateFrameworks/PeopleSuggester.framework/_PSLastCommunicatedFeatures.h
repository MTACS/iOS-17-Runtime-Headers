
@interface _PSLastCommunicatedFeatures : NSObject

+ (int)bucketFromTimeInterval:(double)arg1;
+ (id)featureValueFromTimeInterval:(double)arg1;
+ (id)lastCommunicationFromCandidates:(id)arg1 direction:(long long)arg2 mechanisms:(id)arg3 caches:(id)arg4;
+ (id)lastInteractionFromCandidate:(id)arg1 caches:(id)arg2 direction:(long long)arg3 mechanisms:(id)arg4;
+ (id)recipientDetailsFromContact:(id)arg1;
+ (double)timeIntervalSinceNowForInteraction:(id)arg1;

@end
