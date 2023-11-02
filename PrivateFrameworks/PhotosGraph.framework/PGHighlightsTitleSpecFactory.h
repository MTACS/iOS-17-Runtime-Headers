
@interface PGHighlightsTitleSpecFactory : NSObject

+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)arg1;
+ (id)specCollectionForMeaningLabel:(id)arg1 allowAllCities:(bool)arg2;
+ (id)specPoolForAOILocation;
+ (id)specPoolForBusinessItem;
+ (id)specPoolForGenericLocation:(bool)arg1;
+ (id)specPoolForPublicEvent;
+ (id)specPoolForPublicEventWithBusiness;
+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(bool)arg1 allowAllCities:(bool)arg2;
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(bool)arg1 allowAllCities:(bool)arg2;
+ (id)titleSpecForGenericLocation:(bool)arg1;
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(bool)arg1;

@end
