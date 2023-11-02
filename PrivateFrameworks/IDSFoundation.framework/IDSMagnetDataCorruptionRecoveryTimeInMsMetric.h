
@interface IDSMagnetDataCorruptionRecoveryTimeInMsMetric : NSObject <CUTCoreAnalyticsMetric> {
    long long  _recoveryTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) long long recoveryTime;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithRecoveryTime:(long long)arg1;
- (id)name;
- (long long)recoveryTime;

@end
