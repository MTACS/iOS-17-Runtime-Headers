
@interface _INPBStartCallIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBStartCallIntentResponse> {
    int  _confirmationReason;
    struct { 
        unsigned int confirmationReason : 1; 
        unsigned int shouldDoEmergencyCountdown : 1; 
    }  _has;
    NSArray * _restrictedContacts;
    bool  _shouldDoEmergencyCountdown;
    _INPBConnectedCall * _startedCall;
}

@property (nonatomic) int confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirmationReason;
@property (nonatomic) bool hasShouldDoEmergencyCountdown;
@property (nonatomic, readonly) bool hasStartedCall;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *restrictedContacts;
@property (nonatomic, readonly) unsigned long long restrictedContactsCount;
@property (nonatomic) bool shouldDoEmergencyCountdown;
@property (nonatomic, retain) _INPBConnectedCall *startedCall;
@property (readonly) Class superclass;

+ (Class)restrictedContactsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsConfirmationReason:(id)arg1;
- (void)addRestrictedContacts:(id)arg1;
- (void)clearRestrictedContacts;
- (int)confirmationReason;
- (id)confirmationReasonAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmationReason;
- (bool)hasShouldDoEmergencyCountdown;
- (bool)hasStartedCall;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restrictedContacts;
- (id)restrictedContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictedContactsCount;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;
- (void)setHasShouldDoEmergencyCountdown:(bool)arg1;
- (void)setRestrictedContacts:(id)arg1;
- (void)setShouldDoEmergencyCountdown:(bool)arg1;
- (void)setStartedCall:(id)arg1;
- (bool)shouldDoEmergencyCountdown;
- (id)startedCall;
- (void)writeTo:(id)arg1;

@end
