
@interface WASevereWeatherStringBuilder : NSObject

+ (id)_capitalizeFirstWordOfString:(id)arg1;
+ (id)_displayDescriptionForEvent:(id)arg1 useSentenceCase:(bool)arg2 isFirstEvent:(bool)arg3;
+ (bool)_hasImportantEvent:(id)arg1;
+ (id)attributedImportantHeadlineForEvents:(id)arg1;
+ (id)atttributedDescriptionForEvents:(id)arg1 includeLearnMore:(bool)arg2;
+ (id)atttributedDescriptionForEvents:(id)arg1 includeLearnMore:(bool)arg2 useSentenceCase:(bool)arg3;
+ (id)atttributedHeadlineForEvents:(id)arg1;
+ (id)descriptionForEvents:(id)arg1 includeLearnMore:(bool)arg2;
+ (id)descriptionForEvents:(id)arg1 includeLearnMore:(bool)arg2 useSentenceCase:(bool)arg3;
+ (id)headlineForEvents:(id)arg1;
+ (id)headlineForEvents:(id)arg1 shouldUppercase:(bool)arg2;
+ (id)importantHeadlineForEvents:(id)arg1;

@end
