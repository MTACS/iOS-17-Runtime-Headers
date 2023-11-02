
@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData> {
    NSMutableArray * _additionalData;
    NSArray * _eventData;
    NSMutableDictionary * _measurementSpecificData;
    <MTPerfBaseMeasurementTransformation> * _measurementTransformer;
    NSMutableDictionary * _timestamps;
}

@property (nonatomic, readonly, copy) NSArray *additionalFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *measurementSpecificData;
@property (nonatomic) <MTPerfBaseMeasurementTransformation> *measurementTransformer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *timestamps;

- (void).cxx_destruct;
- (void)addFields:(id)arg1;
- (void)addFieldsWithDictionary:(id)arg1;
- (void)addFieldsWithPromise:(id)arg1;
- (id)additionalFields;
- (id)eventData;
- (id)getAdditionalData;
- (id)initWithMeasurementTransformer:(id)arg1 eventData:(id)arg2;
- (id)measurementSpecificData;
- (id)measurementTransformer;
- (id)metricsData;
- (id)record;
- (void)setMeasurementSpecificData:(id)arg1;
- (void)setMeasurementTransformer:(id)arg1;
- (void)setTimestamps:(id)arg1;
- (id)timestamps;

@end
