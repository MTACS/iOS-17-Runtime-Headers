
@interface MPQueueFeeder : NSObject {
    MPQueueFeederIdentifierRegistry * _identifierRegistry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _identifierRegistryLock;
    NSString * _playActivityFeatureName;
    NSString * _playActivityQueueGroupingID;
    NSData * _playActivityRecommendationData;
    NSString * _siriReferenceIdentifier;
    NSDictionary * _siriWHAMetricsInfo;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSString *playActivityQueueGroupingID;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (void)identifierRegistryWithExclusiveAccess:(id /* block */)arg1;
- (bool)identifierRegistryWithExclusiveAccessReturningBOOL:(id /* block */)arg1;
- (long long)identifierRegistryWithExclusiveAccessReturningInteger:(id /* block */)arg1;
- (id)identifierRegistryWithExclusiveAccessReturningObject:(id /* block */)arg1;
- (id)init;
- (id)playActivityFeatureName;
- (id)playActivityQueueGroupingID;
- (id)playActivityRecommendationData;
- (void)replaceIdentifierRegistry:(id)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityQueueGroupingID:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setSiriWHAMetricsInfo:(id)arg1;
- (id)siriReferenceIdentifier;
- (id)siriWHAMetricsInfo;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
