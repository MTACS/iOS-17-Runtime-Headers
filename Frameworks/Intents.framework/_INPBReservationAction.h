
@interface _INPBReservationAction : PBCodable <NSCopying, NSSecureCoding, _INPBReservationAction> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    _INPBUserActivity * _userActivity;
    _INPBDateTimeRange * _validDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUserActivity;
@property (nonatomic, readonly) bool hasValidDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBUserActivity *userActivity;
@property (nonatomic, retain) _INPBDateTimeRange *validDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (bool)hasUserActivity;
- (bool)hasValidDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUserActivity:(id)arg1;
- (void)setValidDuration:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)userActivity;
- (id)validDuration;
- (void)writeTo:(id)arg1;

@end
