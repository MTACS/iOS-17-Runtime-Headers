
@protocol _INPBControlHomeIntent <NSObject>

@required

+ (Class)contentsType;
+ (Class)filtersType;

- (void)addContents:(_INPBHomeContent *)arg1;
- (void)addFilters:(_INPBHomeFilter *)arg1;
- (void)clearContents;
- (void)clearFilters;
- (NSArray *)contents;
- (_INPBHomeContent *)contentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentsCount;
- (NSArray *)filters;
- (_INPBHomeFilter *)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)hasIntentMetadata;
- (bool)hasTime;
- (bool)hasUserTask;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setContents:(NSArray *)arg1;
- (void)setFilters:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTime:(_INPBDateTimeRange *)arg1;
- (void)setUserTask:(_INPBHomeUserTask *)arg1;
- (_INPBDateTimeRange *)time;
- (_INPBHomeUserTask *)userTask;

@end
