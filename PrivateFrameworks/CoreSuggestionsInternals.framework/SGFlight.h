
@interface SGFlight : NSObject {
    NSString * _airline;
    NSString * _arrivalAirportDescription;
    NSString * _departureAirportDescription;
    NSString * _flightno;
}

@property (nonatomic, readonly) NSString *airline;
@property (nonatomic, readonly) NSString *arrivalAirportDescription;
@property (nonatomic, readonly) NSString *departureAirportDescription;
@property (nonatomic, readonly) NSString *flightno;

- (void).cxx_destruct;
- (id)airline;
- (id)arrivalAirportDescription;
- (id)departureAirportDescription;
- (id)description;
- (id)flightno;
- (id)initWithCarrier:(id)arg1 flightNo:(id)arg2 depDesc:(id)arg3 arrDesc:(id)arg4;

@end
