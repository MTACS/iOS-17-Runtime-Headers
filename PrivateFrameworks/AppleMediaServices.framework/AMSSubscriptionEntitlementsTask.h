
@interface AMSSubscriptionEntitlementsTask : AMSTask {
    long long  _cachePolicy;
    bool  _extendedCarrierCheck;
    long long  _mediaType;
}

@property (nonatomic) long long cachePolicy;
@property (nonatomic) bool extendedCarrierCheck;
@property (nonatomic) long long mediaType;

+ (unsigned long long)_segmentForMediaType:(long long)arg1 error:(id*)arg2;
+ (id)updateCacheForMediaType:(long long)arg1 account:(id)arg2 data:(id)arg3;

- (id)_fetchEntitlementsFromASD;
- (id)_fetchEntitlementsFromIC;
- (id)_queryCachedASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2 reloadIfNeeded:(bool)arg3;
- (id)_reloadASDSubscriptionForSegment:(unsigned long long)arg1 controller:(id)arg2;
- (id)_resultFromASDEntitlements:(id)arg1;
- (id)_resultFromICResponse:(id)arg1;
- (bool)_shouldIgnoreCaches;
- (bool)_shouldIgnoreRemoteData;
- (long long)cachePolicy;
- (bool)extendedCarrierCheck;
- (id)initWithMediaType:(long long)arg1;
- (long long)mediaType;
- (id)performExternalLookup;
- (void)setCachePolicy:(long long)arg1;
- (void)setExtendedCarrierCheck:(bool)arg1;
- (void)setMediaType:(long long)arg1;

@end
