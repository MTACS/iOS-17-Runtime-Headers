
@interface DDMatchFlightNumber : DDMatch {
    NSString * _airline;
    NSString * _flightNumber;
}

@property (nonatomic, readonly) NSString *airline;
@property (nonatomic, readonly) NSString *flightNumber;

- (void).cxx_destruct;
- (id)airline;
- (id)flightNumber;
- (id)initWithDDScannerResult:(id)arg1;

@end
