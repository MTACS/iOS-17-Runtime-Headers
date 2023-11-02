
@interface ATXFlightStatusDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (bool)_flightIDIsValid:(id)arg1;
- (void)flightStatusForFlight:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;

@end
