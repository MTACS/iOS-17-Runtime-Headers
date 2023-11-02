
@interface MADImageRemoveBackgroundResource : VCPMADVisionResource {
    MADRemoveBackgroundCachedMaskState * _cachedMaskState;
    bool  _maskOnly;
}

@property (nonatomic, retain) MADRemoveBackgroundCachedMaskState *cachedMaskState;
@property (nonatomic) bool maskOnly;

+ (id)sharedResource;

- (void).cxx_destruct;
- (long long)activeCost;
- (id)cachedMaskState;
- (long long)inactiveCost;
- (bool)maskOnly;
- (void)purge;
- (void)setCachedMaskState:(id)arg1;
- (void)setMaskOnly:(bool)arg1;

@end
