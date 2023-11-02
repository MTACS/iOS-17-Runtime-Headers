
@interface FCCPercentageOfDayRule : NSObject <FCCDataSerializable> {
    double  _minimumDayDuration;
    double  _percentOfDay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimumDayDuration;
@property (nonatomic, readonly) double percentOfDay;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithMinimumDayDuration:(double)arg1 percentOfDay:(double)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (double)minimumDayDuration;
- (double)percentOfDay;
- (id)protobuf;
- (id)transportData;

@end
