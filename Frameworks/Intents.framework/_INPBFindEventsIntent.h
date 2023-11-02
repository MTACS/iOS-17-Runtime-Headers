
@interface _INPBFindEventsIntent : PBCodable <NSCopying, NSSecureCoding, _INPBFindEventsIntent> {
    _INPBDateTimeRangeValue * _dateTimeRange;
    struct { 
        unsigned int requestedEventAttribute : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _location;
    NSArray * _participants;
    int  _requestedEventAttribute;
    NSString * _searchQuery;
}

@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDateTimeRange;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasRequestedEventAttribute;
@property (nonatomic, readonly) bool hasSearchQuery;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *location;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (nonatomic) int requestedEventAttribute;
@property (nonatomic, copy) NSString *searchQuery;
@property (readonly) Class superclass;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsRequestedEventAttribute:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDateTimeRange;
- (bool)hasIntentMetadata;
- (bool)hasLocation;
- (bool)hasRequestedEventAttribute;
- (bool)hasSearchQuery;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (int)requestedEventAttribute;
- (id)requestedEventAttributeAsString:(int)arg1;
- (id)searchQuery;
- (void)setDateTimeRange:(id)arg1;
- (void)setHasRequestedEventAttribute:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setRequestedEventAttribute:(int)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)writeTo:(id)arg1;

@end
