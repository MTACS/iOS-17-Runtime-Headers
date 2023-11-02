
@interface MTROnOffClusterOffWithEffectParams : NSObject <NSCopying> {
    NSNumber * _effectIdentifier;
    NSNumber * _effectVariant;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *effectId;
@property (nonatomic, copy) NSNumber *effectIdentifier;
@property (nonatomic, copy) NSNumber *effectVariant;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectId;
- (id)effectIdentifier;
- (id)effectVariant;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setEffectId:(id)arg1;
- (void)setEffectIdentifier:(id)arg1;
- (void)setEffectVariant:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
