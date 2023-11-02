
@interface ATXEventTravelTimeDataSourceInternal : NSObject {
    _PASLock * _hypothesizerCacheLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(bool)arg5 heuristicDevice:(id)arg6 callback:(id /* block */)arg7;

@end
