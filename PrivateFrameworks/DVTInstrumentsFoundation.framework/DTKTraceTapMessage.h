
@interface DTKTraceTapMessage : DTTapMessage <NSSecureCoding>

@property (nonatomic) unsigned long long coreCount;
@property (nonatomic) unsigned long long logicalProcessorCore;
@property (nonatomic) unsigned long long recordCount;
@property (nonatomic, copy) NSDictionary *sessionMetadata;
@property (nonatomic) unsigned int tapVersion;
@property (nonatomic) unsigned long long triggerCount;
@property (nonatomic) unsigned long long triggerIndex;
@property (nonatomic, copy) NSDictionary *triggerMetadata;

+ (bool)supportsSecureCoding;

- (unsigned long long)coreCount;
- (unsigned long long)logicalProcessorCore;
- (unsigned long long)recordCount;
- (id)sessionMetadata;
- (void)setCoreCount:(unsigned long long)arg1;
- (void)setLogicalProcessorCore:(unsigned long long)arg1;
- (void)setRecordCount:(unsigned long long)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setTapVersion:(unsigned int)arg1;
- (void)setTriggerCount:(unsigned long long)arg1;
- (void)setTriggerIndex:(unsigned long long)arg1;
- (void)setTriggerMetadata:(id)arg1;
- (unsigned int)tapVersion;
- (unsigned long long)triggerCount;
- (unsigned long long)triggerIndex;
- (id)triggerMetadata;

@end
