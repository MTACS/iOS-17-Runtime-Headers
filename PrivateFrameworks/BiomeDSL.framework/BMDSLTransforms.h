
@interface BMDSLTransforms : NSObject

+ (id)allowedClasses;
+ (id)allowedTransforms;
+ (id)arrayTuplesToDictionary:(id)arg1;
+ (id)durationForEventWithTimestamp:(id)arg1 isStart:(id)arg2 key:(id)arg3 keyName:(id)arg4 startEventsState:(id)arg5 metadata:(id)arg6;
+ (id)durationForEventWithTimestamp:(id)arg1 isStart:(id)arg2 key:(id)arg3 startEventsState:(id)arg4;
+ (id)firstEventOfDayWithEvent:(id)arg1 timestamp:(id)arg2 lastTimestampBuffer:(id)arg3 dayStartOffset:(id)arg4;

@end
