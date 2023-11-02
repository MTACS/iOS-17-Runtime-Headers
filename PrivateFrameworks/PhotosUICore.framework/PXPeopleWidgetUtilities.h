
@interface PXPeopleWidgetUtilities : NSObject

+ (id)localizedTitleStringForHasGroups:(bool)arg1 hasPeople:(bool)arg2 hasPets:(bool)arg3;
+ (id)localizedTitleStringForWidgetDataSource:(id)arg1 photoLibrary:(id)arg2;
+ (id)verifiedPersonsFromMergeCandidatesForPersons:(id)arg1;
+ (id)widgetOrderedMembersFromSortedArray:(id)arg1 inSocialGroupPredicate:(id)arg2 maximumNumberOfMembersNotInSocialGroupForFront:(unsigned long long)arg3;

@end
