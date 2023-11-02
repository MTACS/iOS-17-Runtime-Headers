
@interface CSCachingVibrancyTransitionProvider : NSObject {
    BSUIVibrancyLUT * _cachedVibrancyLUT;
}

@property (nonatomic, copy) BSUIVibrancyLUT *cachedVibrancyLUT;

- (void).cxx_destruct;
- (id)cachedVibrancyLUT;
- (void)setCachedVibrancyLUT:(id)arg1;
- (id)vibrancyLUTWithStartingLUT:(id)arg1 transitionProgress:(double)arg2 toIdentifier:(id)arg3;

@end
