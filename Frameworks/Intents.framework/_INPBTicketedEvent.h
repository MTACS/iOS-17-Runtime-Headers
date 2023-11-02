
@interface _INPBTicketedEvent : PBCodable <NSCopying, NSSecureCoding, _INPBTicketedEvent> {
    int  _category;
    _INPBDateTimeRange * _eventDuration;
    struct { 
        unsigned int category : 1; 
    }  _has;
    _INPBLocationValue * _location;
    NSString * _name;
}

@property (nonatomic) int category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDateTimeRange *eventDuration;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasEventDuration;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocationValue *location;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsCategory:(id)arg1;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDuration;
- (bool)hasCategory;
- (bool)hasEventDuration;
- (bool)hasLocation;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setEventDuration:(id)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
