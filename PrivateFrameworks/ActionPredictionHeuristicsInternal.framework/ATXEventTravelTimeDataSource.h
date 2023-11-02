
@interface ATXEventTravelTimeDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(bool)arg5 callback:(id /* block */)arg6;

@end
