
@interface ATXBlendingBiomeStreamLoggerContext : NSObject <NSSecureCoding> {
    ATXBiomeStreamCacheUpdateContext * _cacheUpdateContext;
    ATXScreenLogUnlockSessionContext * _screenLogUnlockSessionContext;
    ATXSingleSuggestionSessionTrackingContext * _sessionTrackingContext;
    ATXStackSystemSuggestTrackingContext * _stackSuggestTrackingContext;
}

@property (nonatomic, retain) ATXBiomeStreamCacheUpdateContext *cacheUpdateContext;
@property (nonatomic, retain) ATXScreenLogUnlockSessionContext *screenLogUnlockSessionContext;
@property (nonatomic, retain) ATXSingleSuggestionSessionTrackingContext *sessionTrackingContext;
@property (nonatomic, retain) ATXStackSystemSuggestTrackingContext *stackSuggestTrackingContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheUpdateContext;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionTrackingContext:(id)arg1 cacheUpdateContext:(id)arg2 stackSuggestTrackingContext:(id)arg3 screenLogUnlockSessionContext:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBlendingBiomeStreamLoggerContext:(id)arg1;
- (id)screenLogUnlockSessionContext;
- (id)sessionTrackingContext;
- (void)setCacheUpdateContext:(id)arg1;
- (void)setScreenLogUnlockSessionContext:(id)arg1;
- (void)setSessionTrackingContext:(id)arg1;
- (void)setStackSuggestTrackingContext:(id)arg1;
- (id)stackSuggestTrackingContext;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;

@end
