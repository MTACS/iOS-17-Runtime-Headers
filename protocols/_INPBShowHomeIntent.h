
@protocol _INPBShowHomeIntent <NSObject>

@required

+ (Class)filtersType;

- (void)addFilters:(_INPBHomeFilter *)arg1;
- (void)clearFilters;
- (NSArray *)filters;
- (_INPBHomeFilter *)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)hasIntentMetadata;
- (bool)hasTime;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setFilters:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTime:(_INPBDateTimeRange *)arg1;
- (_INPBDateTimeRange *)time;

@end
