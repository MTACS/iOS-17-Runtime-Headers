
@interface PPSTimeIntervalSetGenerator : NSObject {
    unsigned long long  _directionality;
    PPSRequestDispatcher * _dispatcher;
    NSDateInterval * _powerlogTimeBoundaries;
    unsigned long long  _settings;
}

- (void).cxx_destruct;
- (id)initWithFilepath:(id)arg1 settings:(unsigned long long)arg2 directionality:(unsigned long long)arg3;
- (id)intervalSetForTimeSeries:(id)arg1 withIntervalStartCheckBlock:(id /* block */)arg2 intervalEndCheckBlock:(id /* block */)arg3 payloadBlock:(id /* block */)arg4 coalescePolicy:(id)arg5;
- (id)systemHaltTimeSeries;
- (id)systemSleepTimeSeries;
- (id)timelineBoundariesFromPowerlog;

@end
