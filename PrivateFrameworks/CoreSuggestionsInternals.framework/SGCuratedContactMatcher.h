
@interface SGCuratedContactMatcher : NSObject

+ (id)_birthdayDateFormatter;
+ (bool)_compareContact:(id)arg1 cnContact:(id)arg2 newDetails:(id*)arg3 matchedDetails:(id*)arg4 matchPreference:(long long)arg5 stopOnNewDetail:(bool)arg6 stopOnMatchedDetail:(bool)arg7;
+ (id)_filterCandidates:(id)arg1 similarToName:(id)arg2 exceedingThreshold:(double)arg3;
+ (id)_filterCandidates:(id)arg1 withUniqueDetailMatchesToContact:(id)arg2 andFeatures:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; int x2; int x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; float x10; int x11; int x12; int x13; int x14; int x15; bool x16; }*)arg3;
+ (id)_findContactsMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; int x2; int x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; float x10; int x11; int x12; int x13; int x14; int x15; bool x16; }*)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5;
+ (id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; int x2; int x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; float x10; int x11; int x12; int x13; int x14; int x15; bool x16; }*)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5;
+ (id)_getPeopleWithNameToken:(id)arg1 fromContactStore:(id)arg2 withKeysToFetch:(id)arg3 ifMatchingPredicate:(id /* block */)arg4;
+ (bool)_isMeContact:(id)arg1 withContactStore:(id)arg2;
+ (id)_lookupContact:(id)arg1 andFeatures:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; int x2; int x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; float x10; int x11; int x12; int x13; int x14; int x15; bool x16; }*)arg2 fromContactStore:(id)arg3 withKeysToFetch:(id)arg4;
+ (id)_realtimeContactFromPseudoContact:(id)arg1 andFeatures:(struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; int x2; int x3; int x4; bool x5; bool x6; bool x7; bool x8; bool x9; float x10; int x11; int x12; int x13; int x14; int x15; bool x16; }*)arg2 assimilatingMatchingCuratedContacts:(id)arg3;
+ (id)_realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 fromEntity:(id)arg3 normalizedName:(id)arg4 error:(id*)arg5;
+ (void)clearMeContactCache;
+ (void)compareContact:(id)arg1 cnContact:(id)arg2 newDetails:(id*)arg3 matchedDetails:(id*)arg4 matchPreference:(long long)arg5;
+ (bool)compareContact:(id)arg1 cnContact:(id)arg2 stopOnNewDetail:(bool)arg3 stopOnMatchedDetail:(bool)arg4 matchPreference:(long long)arg5;
+ (id)curatedContactsFromContactStore:(id)arg1 matchingPseudoContact:(id)arg2 error:(id*)arg3;
+ (id)fetchMeContactFromContactStore:(id)arg1;
+ (id)filterCandidates:(id)arg1 withDetailSubsetOfCNContact:(id)arg2;
+ (id)realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 error:(id*)arg3;
+ (id)realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 fromEntity:(id)arg3 error:(id*)arg4;
+ (id)stripBirthdayFromSGContact:(id)arg1;
+ (id)stripStaleBirthdayFromSGContact:(id)arg1 withEntity:(id)arg2;

@end
