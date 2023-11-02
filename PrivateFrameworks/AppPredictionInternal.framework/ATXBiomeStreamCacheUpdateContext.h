
@interface ATXBiomeStreamCacheUpdateContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _currentBlendingModelCacheCreationDatesByConsumerSubType;
    NSMutableDictionary * _currentClientModelCacheCreationDatesByClientModelId;
    NSMutableDictionary * _previousBlendingModelCacheAgesByConsumerSubType;
    NSMutableDictionary * _previousClientModelCacheAgesByClientModelId;
}

@property (nonatomic, retain) NSMutableDictionary *currentBlendingModelCacheCreationDatesByConsumerSubType;
@property (nonatomic, retain) NSMutableDictionary *currentClientModelCacheCreationDatesByClientModelId;
@property (nonatomic, retain) NSMutableDictionary *previousBlendingModelCacheAgesByConsumerSubType;
@property (nonatomic, retain) NSMutableDictionary *previousClientModelCacheAgesByClientModelId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheAgeForPreviousBlendingUICacheUpdateForConsumerSubType:(unsigned char)arg1;
- (id)cacheAgeForPreviousClientModelCacheWithClientModelId:(id)arg1;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)currentBlendingModelCacheCreationDatesByConsumerSubType;
- (id)currentClientModelCacheCreationDatesByClientModelId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentClientModelCacheCreationDates:(id)arg1 previousClientModelCacheAges:(id)arg2 currentBlendingModelCacheCreationDates:(id)arg3 previousBlendingModelCacheAges:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBiomeStreamCacheUpdateContext:(id)arg1;
- (id)previousBlendingModelCacheAgesByConsumerSubType;
- (id)previousClientModelCacheAgesByClientModelId;
- (void)setCurrentBlendingModelCacheCreationDatesByConsumerSubType:(id)arg1;
- (void)setCurrentClientModelCacheCreationDatesByClientModelId:(id)arg1;
- (void)setPreviousBlendingModelCacheAgesByConsumerSubType:(id)arg1;
- (void)setPreviousClientModelCacheAgesByClientModelId:(id)arg1;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;

@end
