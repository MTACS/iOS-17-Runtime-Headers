
@interface _INPBUpdateEventIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBUpdateEventIntentResponse> {
    int  _confirmationReason;
    NSArray * _conflictingEventIdentifiers;
    struct { 
        unsigned int confirmationReason : 1; 
    }  _has;
    _INPBCalendarEvent * _updatedEvent;
}

@property (nonatomic) int confirmationReason;
@property (nonatomic, copy) NSArray *conflictingEventIdentifiers;
@property (nonatomic, readonly) unsigned long long conflictingEventIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirmationReason;
@property (nonatomic, readonly) bool hasUpdatedEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBCalendarEvent *updatedEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsConfirmationReason:(id)arg1;
- (void)addConflictingEventIdentifiers:(id)arg1;
- (void)clearConflictingEventIdentifiers;
- (int)confirmationReason;
- (id)confirmationReasonAsString:(int)arg1;
- (id)conflictingEventIdentifiers;
- (id)conflictingEventIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingEventIdentifiersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmationReason;
- (bool)hasUpdatedEvent;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationReason:(int)arg1;
- (void)setConflictingEventIdentifiers:(id)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setUpdatedEvent:(id)arg1;
- (id)updatedEvent;
- (void)writeTo:(id)arg1;

@end
