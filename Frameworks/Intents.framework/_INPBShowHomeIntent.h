
@interface _INPBShowHomeIntent : PBCodable <NSCopying, NSSecureCoding, _INPBShowHomeIntent> {
    NSArray * _filters;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDateTimeRange * _time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDateTimeRange *time;

+ (Class)filtersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addFilters:(id)arg1;
- (void)clearFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)filters;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)hasIntentMetadata;
- (bool)hasTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;
- (void)writeTo:(id)arg1;

@end
