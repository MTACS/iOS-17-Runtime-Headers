
@interface PGPeopleTitleUtility : NSObject

+ (id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2;
+ (id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 titleComponent:(id)arg2 containsMe:(bool)arg3;
+ (id)ageStringForPersonNode:(id)arg1 date:(id)arg2;
+ (id)ageStringForPersonNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 titleComponent:(id)arg3 insertLineBreak:(bool)arg4 allowFamilyHome:(bool)arg5;
+ (id)nameFromPersonNode:(id)arg1;
+ (id)nameStringForPersonNodes:(id)arg1 includeMe:(bool)arg2 allowUnnamed:(bool)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(bool)arg5;
+ (id)nameStringForPersonNodes:(id)arg1 includeMe:(bool)arg2 insertLineBreaks:(bool)arg3;
+ (id)peopleGroupNameForPersonNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;
+ (id)peopleGroupNameForPersonNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 fallbackToGeneric:(bool)arg3;

@end
