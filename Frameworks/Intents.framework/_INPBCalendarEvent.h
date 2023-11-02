
@interface _INPBCalendarEvent : PBCodable <NSCopying, NSSecureCoding, _INPBCalendarEvent> {
    NSString * _calendarPunchoutURI;
    _INPBDateTimeRangeValue * _dateTimeRange;
    NSString * _eventIdentifier;
    struct { 
        unsigned int isContactBirthday : 1; 
    }  _has;
    bool  _isContactBirthday;
    _INPBLocation * _location;
    NSArray * _participants;
    NSString * _title;
}

@property (nonatomic, copy) NSString *calendarPunchoutURI;
@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) bool hasCalendarPunchoutURI;
@property (nonatomic, readonly) bool hasDateTimeRange;
@property (nonatomic, readonly) bool hasEventIdentifier;
@property (nonatomic) bool hasIsContactBirthday;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContactBirthday;
@property (nonatomic, retain) _INPBLocation *location;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) unsigned long long participantsCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (Class)participantsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addParticipants:(id)arg1;
- (id)calendarPunchoutURI;
- (void)clearParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTimeRange;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (bool)hasCalendarPunchoutURI;
- (bool)hasDateTimeRange;
- (bool)hasEventIdentifier;
- (bool)hasIsContactBirthday;
- (bool)hasLocation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isContactBirthday;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)participants;
- (id)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (void)setCalendarPunchoutURI:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setHasIsContactBirthday:(bool)arg1;
- (void)setIsContactBirthday:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
