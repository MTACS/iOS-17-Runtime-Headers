
@interface MPPlayableContentManagerContext : NSObject {
    bool  _contentLimitsEnforced;
    bool  _endpointAvailable;
    long long  _enforcedContentItemsCount;
    long long  _enforcedContentTreeDepth;
}

@property (nonatomic, readonly) bool contentLimitsEnabled;
@property (nonatomic) bool contentLimitsEnforced;
@property (nonatomic) bool endpointAvailable;
@property (nonatomic) long long enforcedContentItemsCount;
@property (nonatomic) long long enforcedContentTreeDepth;

- (bool)contentLimitsEnabled;
- (bool)contentLimitsEnforced;
- (bool)endpointAvailable;
- (long long)enforcedContentItemsCount;
- (long long)enforcedContentTreeDepth;
- (void)setContentLimitsEnforced:(bool)arg1;
- (void)setEndpointAvailable:(bool)arg1;
- (void)setEnforcedContentItemsCount:(long long)arg1;
- (void)setEnforcedContentTreeDepth:(long long)arg1;

@end
