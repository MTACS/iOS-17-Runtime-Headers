
@interface ATXProactiveSuggestionShadowLoggingResult : NSObject <NSSecureCoding> {
    ATXClientModelCacheUpdate * _clientModelCacheUpdate;
    ATXPredictionContext * _context;
    <BMStoreData> * _shadowEvent;
    NSDate * _shadowEventDate;
}

@property (nonatomic, readonly) ATXClientModelCacheUpdate *clientModelCacheUpdate;
@property (nonatomic, readonly) ATXPredictionContext *context;
@property (nonatomic, readonly) <BMStoreData> *shadowEvent;
@property (nonatomic, readonly) NSDate *shadowEventDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientModelCacheUpdate;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadowEvent:(id)arg1 shadowEventDate:(id)arg2 clientModelCacheUpdate:(id)arg3 context:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionShadowLoggingResult:(id)arg1;
- (id)shadowEvent;
- (id)shadowEventDate;

@end
