
@interface HKConceptSynthesizer : NSObject

+ (id)_popValueForString:(id)arg1 startingFromSubstring:(id)arg2 untilSubstring:(id)arg3 outRemainderString:(id*)arg4 outEndOfString:(bool*)arg5 error:(id*)arg6;
+ (id)_substringsInBetweenSequentialDelimiters:(id)arg1 poppableString:(id)arg2 outReachedEndOfString:(bool*)arg3 outStringRemainder:(id*)arg4 error:(id*)arg5;
+ (id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 additionalAttributes:(id)arg3;
+ (id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3 addtionalAttributes:(id)arg4;
+ (id)adHocCodingForCodingCollection:(id)arg1;
+ (id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)bestDisplayNameForCodingCollection:(id)arg1;
+ (id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)codingCollectionFromAdHocCode:(id)arg1 error:(id*)arg2;
+ (id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(id /* block */)arg3;
+ (id)prioritizedCodingSystemsForDisplay;
+ (id)privateCodeCreationCodingSortDescriptors;
+ (id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)arg1;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)arg1 additionalAttributes:(id)arg2;

@end
