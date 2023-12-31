
@interface FUFlightCodeShare : NSObject <NSSecureCoding> {
    FUAirline * _airline;
    unsigned long long  _flightNumber;
}

@property (retain) FUAirline *airline;
@property unsigned long long flightNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airline;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flightNumber;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAirline:(id)arg1;
- (void)setFlightNumber:(unsigned long long)arg1;

@end
