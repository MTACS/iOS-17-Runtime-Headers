
@interface PGTitleSpecFactory : NSObject

+ (id)_publicEventSpecCategoryNameAtBusiness;
+ (id)_publicEventSpecEventName;
+ (id)_publicEventSpecPerformerNames;
+ (id)_specForActivity;
+ (id)_specForAnniversary;
+ (id)_specForBaby;
+ (id)_specForBabyGrowingUp;
+ (id)_specForBeaching;
+ (id)_specForBirthday;
+ (id)_specForBreakfast;
+ (id)_specForCelebration;
+ (id)_specForClimbing;
+ (id)_specForDinner;
+ (id)_specForDiving;
+ (id)_specForEarlyMomentsWithPersonNodes:(id)arg1;
+ (id)_specForEntertainment;
+ (id)_specForFoodieWithPersonNodes:(id)arg1 locationName:(id)arg2 tripTitleLocationType:(unsigned long long)arg3 allowInspiredTastesTitle:(bool)arg4 genericOnly:(bool)arg5;
+ (id)_specForGathering;
+ (id)_specForHiking;
+ (id)_specForLunch;
+ (id)_specForNightOut;
+ (id)_specForPeopleVisiting;
+ (id)_specForPerformance;
+ (id)_specForPet;
+ (id)_specForSportEvent;
+ (id)_specForThrowbackThursday;
+ (id)_specForWedding;
+ (id)_specForWinterSport;
+ (id)specCollectionForFoodieMemoryWithPersonNodes:(id)arg1 locationName:(id)arg2 tripTitleLocationType:(unsigned long long)arg3 allowInspiredTastesTitle:(bool)arg4 genericOnly:(bool)arg5;
+ (id)specCollectionForMeaningLabel:(id)arg1;
+ (id)specCollectionForMemoryCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2;
+ (id)specCollectionForMemoryCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 personNodes:(id)arg3;

@end
