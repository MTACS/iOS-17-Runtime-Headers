
@protocol _INPBSearchForFilesIntentResponse <NSObject>

@required

+ (Class)entitiesType;

- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
- (NSArray *)entities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasNumResults;
- (bool)hasQuery;
- (bool)hasSuccess;
- (_INPBInteger *)numResults;
- (_INPBString *)query;
- (void)setEntities:(NSArray *)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setNumResults:(_INPBInteger *)arg1;
- (void)setQuery:(_INPBString *)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
