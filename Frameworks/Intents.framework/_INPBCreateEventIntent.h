
@interface _INPBCreateEventIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCreateEventIntent> {
    _INPBDateTimeRangeValue * _dateTimeRange;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBLocation * _location;
    NSArray * _participants;
    NSString * _title;
}

@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDateTimeRange;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBLocation *location;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDateTimeRange;
- (bool)hasIntentMetadata;
- (bool)hasLocation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
