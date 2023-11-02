
@interface HDQuantityDatum : HDDataCollectorSensorDatum {
    NSDictionary * _metadata;
    HKQuantity * _quantity;
    id /* block */  _saveCompletion;
}

@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) HKQuantity *quantity;
@property (nonatomic, copy) id /* block */ saveCompletion;

+ (id)hdt_quantityDatumForType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 value:(double)arg4;
+ (id)quantityDataForDifferencesInData:(id)arg1 baseDatum:(id)arg2 unit:(id)arg3 differenceHandler:(id /* block */)arg4 intervalHandler:(id /* block */)arg5;
+ (id)quantityDatumWithHKQuantityDatum:(id)arg1 metadata:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)datumForChangeSince:(id)arg1 newIdentifier:(id)arg2 newResumeContext:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 metadata:(id)arg4 resumeContextProvider:(id /* block */)arg5;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 quantity:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)quantity;
- (id /* block */)saveCompletion;
- (void)setSaveCompletion:(id /* block */)arg1;

@end
