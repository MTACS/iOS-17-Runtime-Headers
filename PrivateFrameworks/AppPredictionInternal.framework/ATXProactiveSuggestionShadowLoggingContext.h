
@interface ATXProactiveSuggestionShadowLoggingContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _clientModelCacheUpdates;
    ATXPredictionContext * _context;
}

@property (nonatomic, readonly) NSDictionary *clientModelCacheUpdates;
@property (nonatomic, readonly) ATXPredictionContext *context;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientModelCacheUpdates;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithClientModelCacheUpdates:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXProactiveSuggestionShadowLoggingContext:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithContext:(id)arg1;

@end
