
@interface CNVCardTesting : NSObject

+ (id)activityAlertResultWithTypes:(id)arg1 sounds:(id)arg2 vibrations:(id)arg3;
+ (id)cardDataWithBodyLines:(id)arg1 version:(id)arg2 encoding:(unsigned long long)arg3;
+ (id)chineseDateWithEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4;
+ (id)complexValueWithValue:(id)arg1 label:(id)arg2 isPrimary:(bool)arg3;
+ (id)emailItemWithAddress:(id)arg1 label:(id)arg2;
+ (id)gregorianDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)instantMessagingItemWithUsername:(id)arg1 service:(id)arg2 label:(id)arg3;
+ (id)itemWithValue:(id)arg1 label:(id)arg2;
+ (id)linesUsingAdapter:(id)arg1;
+ (id)linesUsingAdapter:(id)arg1 options:(id)arg2;
+ (id)parseCardWithBodyLine:(id)arg1;
+ (id)parseCardWithBodyLines:(id)arg1;
+ (id)parseCardWithBodyLines:(id)arg1 version:(id)arg2 encoding:(unsigned long long)arg3;
+ (id)parseCardWithData:(id)arg1;
+ (id)parseCardWithData:(id)arg1 options:(id)arg2;
+ (id)resultWithProperty:(id)arg1 value:(id)arg2 label:(id)arg3 isPrimary:(bool)arg4;
+ (id)unknownPropertyWithName:(id)arg1 line:(id)arg2;
+ (id)version21DataUsingAdapter:(id)arg1;
+ (bool)version21DataUsingAdapter:(id)arg1 containsData:(id)arg2;
+ (bool)version30CardForPerson:(id)arg1 containsLine:(id)arg2;
+ (bool)version30CardForPerson:(id)arg1 containsString:(id)arg2;
+ (id)version30DataUsingAdapter:(id)arg1;
+ (bool)version30DataUsingAdapter:(id)arg1 containsData:(id)arg2;

@end
