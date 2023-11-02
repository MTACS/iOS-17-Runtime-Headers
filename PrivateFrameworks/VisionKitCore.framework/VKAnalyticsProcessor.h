
@interface VKAnalyticsProcessor : NSObject {
    bool  _isPublicAPI;
    VKAnalyticsSessionAccumulator * _sessionAccumulator;
}

@property (nonatomic) bool isPublicAPI;
@property (nonatomic, retain) VKAnalyticsSessionAccumulator *sessionAccumulator;

- (void).cxx_destruct;
- (bool)isPublicAPI;
- (void)processAndSendEvent:(id)arg1;
- (void)processAndSendSession:(id)arg1;
- (void)sendCoreAnalyticsEvent:(id)arg1 block:(id /* block */)arg2;
- (id)sessionAccumulator;
- (void)setIsPublicAPI:(bool)arg1;
- (void)setSessionAccumulator:(id)arg1;

@end
