
@interface VCPMADVIRemoveBackgroundResource : VCPMADVisionResource {
    VCPMADVIRemoveBackgroundCachedImageHandler * _cachedImageHandler;
    bool  _maskOnly;
}

@property (nonatomic, retain) VCPMADVIRemoveBackgroundCachedImageHandler *cachedImageHandler;
@property (nonatomic) bool maskOnly;

+ (id)sharedResource;

- (void).cxx_destruct;
- (long long)activeCost;
- (id)cachedImageHandler;
- (long long)inactiveCost;
- (bool)maskOnly;
- (void)purge;
- (void)setCachedImageHandler:(id)arg1;
- (void)setMaskOnly:(bool)arg1;

@end
