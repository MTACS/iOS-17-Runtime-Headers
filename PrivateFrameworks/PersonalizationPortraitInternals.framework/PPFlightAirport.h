
@interface PPFlightAirport : NSObject {
    NSString * _iataCode;
    NSString * _name;
    unsigned char  _role;
}

@property (nonatomic, readonly) NSString *iataCode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char role;

- (void).cxx_destruct;
- (id)iataCode;
- (id)initWithName:(id)arg1 iataCode:(id)arg2 role:(unsigned char)arg3;
- (bool)isEqualToPPFlightAirport:(id)arg1;
- (id)name;
- (unsigned char)role;

@end
