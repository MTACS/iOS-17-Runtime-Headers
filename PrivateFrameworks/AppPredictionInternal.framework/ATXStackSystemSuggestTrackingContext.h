
@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding> {
    ATXStackRotationSessionManager * _sessionManager;
    NSMutableArray * _systemSuggestBlendingCaches;
}

@property (nonatomic, readonly) ATXStackRotationSessionManager *sessionManager;
@property (nonatomic, readonly) NSMutableArray *systemSuggestBlendingCaches;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheWithUUID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRotationSessionManager:(id)arg1 systemSuggestBlendingCaches:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXStackSystemSuggestTrackingContext:(id)arg1;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)sessionManager;
- (id)systemSuggestBlendingCaches;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;

@end
