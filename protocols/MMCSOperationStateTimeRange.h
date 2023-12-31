
@protocol MMCSOperationStateTimeRange <NSObject>

@required

- (double)absoluteStart;
- (double)absoluteStop;
- (long long)compareStartTime:(id <MMCSOperationStateTimeRange>)arg1;
- (long long)compareStopTime:(id <MMCSOperationStateTimeRange>)arg1;
- (double)duration;
- (unsigned long long)operationState;
- (NSDate *)startDate;

@end
