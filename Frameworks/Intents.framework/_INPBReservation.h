
@interface _INPBReservation : PBCodable <NSCopying, NSSecureCoding, _INPBReservation> {
    NSArray * _actions;
    _INPBTimestamp * _bookingTime;
    struct { 
        unsigned int reservationStatus : 1; 
    }  _has;
    _INPBDataString * _itemReference;
    NSString * _reservationHolderName;
    NSString * _reservationNumber;
    int  _reservationStatus;
    _INPBURLValue * _url;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic, retain) _INPBTimestamp *bookingTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBookingTime;
@property (nonatomic, readonly) bool hasItemReference;
@property (nonatomic, readonly) bool hasReservationHolderName;
@property (nonatomic, readonly) bool hasReservationNumber;
@property (nonatomic) bool hasReservationStatus;
@property (nonatomic, readonly) bool hasUrl;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *itemReference;
@property (nonatomic, copy) NSString *reservationHolderName;
@property (nonatomic, copy) NSString *reservationNumber;
@property (nonatomic) int reservationStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBURLValue *url;

+ (Class)actionsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsReservationStatus:(id)arg1;
- (id)actions;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(id)arg1;
- (id)bookingTime;
- (void)clearActions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBookingTime;
- (bool)hasItemReference;
- (bool)hasReservationHolderName;
- (bool)hasReservationNumber;
- (bool)hasReservationStatus;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemReference;
- (bool)readFrom:(id)arg1;
- (id)reservationHolderName;
- (id)reservationNumber;
- (int)reservationStatus;
- (id)reservationStatusAsString:(int)arg1;
- (void)setActions:(id)arg1;
- (void)setBookingTime:(id)arg1;
- (void)setHasReservationStatus:(bool)arg1;
- (void)setItemReference:(id)arg1;
- (void)setReservationHolderName:(id)arg1;
- (void)setReservationNumber:(id)arg1;
- (void)setReservationStatus:(int)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)writeTo:(id)arg1;

@end
