
@interface HKHeartbeatSeriesSample : HKSeriesSample <_HKBinarySample> {
    NSNumber * _cachedMaxBeatsPerMinute;
    NSNumber * _cachedMinBeatsPerMinute;
    NSData * _heartbeatData;
    long long  _numberOfDataPoints;
}

@property (readonly, copy) NSNumber *_maximumBeatsPerMinute;
@property (readonly, copy) NSNumber *_minimumBeatsPerMinute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *heartbeatData;
@property (readonly) long long numberOfDataPoints;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_heartbeatSeriesSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id*)arg4;
+ (id)_heartbeatSeriesSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5;
+ (bool)_isConcreteObjectClass;
+ (id)heartBeatSequenceSampleFromCSV:(id)arg1 startDate:(id)arg2 metadata:(id)arg3 error:(out id*)arg4;
+ (id)heartbeatSequenceSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
- (void)_enumerateHeartbeatDataWithBlock:(id /* block */)arg1;
- (id)_maximumBeatsPerMinute;
- (id)_minimumBeatsPerMinute;
- (void)_setPayload:(id)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHeartbeatDataWithBlock:(id /* block */)arg1;
- (id)heartbeatData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfDataPoints;
- (id)payload;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 subsampleDelegate:(id)arg4;
- (id)sequenceChartData;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

+ (id)_aFibSeriesSampleWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;
+ (id)_nonAFibSeriesSampleWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;

@end
