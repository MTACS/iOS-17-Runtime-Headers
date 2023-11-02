
@interface _INPBReservationWrapper : PBCodable <NSCopying, NSSecureCoding, _INPBReservationWrapper> {
    _INPBBoatReservation * _boatReservation;
    _INPBBusReservation * _busReservation;
    _INPBFlightReservation * _flightReservation;
    struct { }  _has;
    _INPBLodgingReservation * _lodgingReservation;
    _INPBRentalCarReservation * _rentalCarReservation;
    _INPBRestaurantReservation * _restaurantReservation;
    _INPBTicketedEventReservation * _ticketedEventReservation;
    _INPBTrainReservation * _trainReservation;
}

@property (nonatomic, retain) _INPBBoatReservation *boatReservation;
@property (nonatomic, retain) _INPBBusReservation *busReservation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFlightReservation *flightReservation;
@property (nonatomic, readonly) bool hasBoatReservation;
@property (nonatomic, readonly) bool hasBusReservation;
@property (nonatomic, readonly) bool hasFlightReservation;
@property (nonatomic, readonly) bool hasLodgingReservation;
@property (nonatomic, readonly) bool hasRentalCarReservation;
@property (nonatomic, readonly) bool hasRestaurantReservation;
@property (nonatomic, readonly) bool hasTicketedEventReservation;
@property (nonatomic, readonly) bool hasTrainReservation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLodgingReservation *lodgingReservation;
@property (nonatomic, retain) _INPBRentalCarReservation *rentalCarReservation;
@property (nonatomic, retain) _INPBRestaurantReservation *restaurantReservation;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTicketedEventReservation *ticketedEventReservation;
@property (nonatomic, retain) _INPBTrainReservation *trainReservation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)boatReservation;
- (id)busReservation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)flightReservation;
- (bool)hasBoatReservation;
- (bool)hasBusReservation;
- (bool)hasFlightReservation;
- (bool)hasLodgingReservation;
- (bool)hasRentalCarReservation;
- (bool)hasRestaurantReservation;
- (bool)hasTicketedEventReservation;
- (bool)hasTrainReservation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lodgingReservation;
- (bool)readFrom:(id)arg1;
- (id)rentalCarReservation;
- (id)restaurantReservation;
- (void)setBoatReservation:(id)arg1;
- (void)setBusReservation:(id)arg1;
- (void)setFlightReservation:(id)arg1;
- (void)setLodgingReservation:(id)arg1;
- (void)setRentalCarReservation:(id)arg1;
- (void)setRestaurantReservation:(id)arg1;
- (void)setTicketedEventReservation:(id)arg1;
- (void)setTrainReservation:(id)arg1;
- (id)ticketedEventReservation;
- (id)trainReservation;
- (void)writeTo:(id)arg1;

@end
