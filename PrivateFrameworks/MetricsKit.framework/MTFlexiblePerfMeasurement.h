
@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData> {
    NSString * _eventType;
}

@property (nonatomic, readonly, copy) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *eventData;
@property (nonatomic, readonly, copy) NSString *eventType;
@property (nonatomic, copy) NSString *eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventType;
- (id)initWithMeasurementTransformer:(id)arg1 eventType:(id)arg2 eventData:(id)arg3;
- (void)mark:(id)arg1;
- (void)mark:(id)arg1 date:(id)arg2;
- (void)mark:(id)arg1 time:(long long)arg2;
- (void)setEventType:(id)arg1;
- (void)setXpSamplingForced:(bool)arg1;
- (void)setXpSamplingPercentage:(double)arg1;

@end
