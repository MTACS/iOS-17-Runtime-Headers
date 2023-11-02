
@interface CSDonatedEvent : NSObject <NSCopying> {
    NSMutableDictionary * _mutableAttributes;
}

@property (nonatomic, copy) NSDictionary *additionalInfo;
@property (readonly) NSDictionary *attributes;
@property (nonatomic, copy) NSArray *docIDs;
@property (nonatomic) bool fromAllowListedSender;
@property (retain) NSMutableDictionary *mutableAttributes;
@property (nonatomic, copy) NSString *type;

+ (id)eventFromData:(id)arg1;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)arrivalAirportCode;
- (id)arrivalAirportName;
- (id)arrivalDateTime;
- (id)arrivalTerminal;
- (id)attributes;
- (id)bookingInfoUrl;
- (id)checkInUrl;
- (id)confirmationNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)courierName;
- (id)data;
- (id)deliveryDateTime;
- (id)departureAirportCode;
- (id)departureAirportName;
- (id)departureDateTime;
- (id)departureTerminal;
- (id)description;
- (id)docIDs;
- (id)flightCarrier;
- (id)flightNumber;
- (id)flightStatus;
- (bool)fromAllowListedSender;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)merchantName;
- (id)mutableAttributes;
- (id)orderDateTime;
- (bool)senderIsCourier;
- (void)setAdditionalInfo:(id)arg1;
- (void)setArrivalAirportCode:(id)arg1;
- (void)setArrivalAirportName:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setArrivalTerminal:(id)arg1;
- (void)setBookingInfoUrl:(id)arg1;
- (void)setCheckInUrl:(id)arg1;
- (void)setConfirmationNumber:(id)arg1;
- (void)setCourierName:(id)arg1;
- (void)setDeliveryDateTime:(id)arg1;
- (void)setDepartureAirportCode:(id)arg1;
- (void)setDepartureAirportName:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (void)setDepartureTerminal:(id)arg1;
- (void)setDocIDs:(id)arg1;
- (void)setFlightCarrier:(id)arg1;
- (void)setFlightNumber:(id)arg1;
- (void)setFlightStatus:(id)arg1;
- (void)setFromAllowListedSender:(bool)arg1;
- (void)setMerchantName:(id)arg1;
- (void)setMutableAttributes:(id)arg1;
- (void)setOrderDateTime:(id)arg1;
- (void)setSenderIsCourier:(bool)arg1;
- (void)setTrackingNumber:(id)arg1;
- (void)setTrackingUrl:(id)arg1;
- (void)setType:(id)arg1;
- (id)trackingNumber;
- (id)trackingUrl;
- (id)type;

@end
