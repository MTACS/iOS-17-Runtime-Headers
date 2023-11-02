
@interface FCCTimeOfDayRule : NSObject <FCCDataSerializable> {
    double  _minimumDayDuration;
    double  _secondsBeforeEndOfDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumDayDuration;
@property (nonatomic, readonly) double secondsBeforeEndOfDay;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithMinimumDayDuration:(double)arg1 secondsBeforeEndOfDay:(double)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (double)minimumDayDuration;
- (id)protobuf;
- (double)secondsBeforeEndOfDay;
- (id)transportData;

@end
