
@interface _INPBControlHomeIntent : PBCodable <NSCopying, NSSecureCoding, _INPBControlHomeIntent> {
    NSArray * _contents;
    NSArray * _filters;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDateTimeRange * _time;
    _INPBHomeUserTask * _userTask;
}

@property (nonatomic, copy) NSArray *contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, readonly) bool hasUserTask;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRange *time;
@property (nonatomic, retain) _INPBHomeUserTask *userTask;

+ (Class)contentsType;
+ (Class)filtersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addContents:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)clearContents;
- (void)clearFilters;
- (id)contents;
- (id)contentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)filters;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)hasIntentMetadata;
- (bool)hasTime;
- (bool)hasUserTask;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setUserTask:(id)arg1;
- (id)time;
- (id)userTask;
- (void)writeTo:(id)arg1;

@end
