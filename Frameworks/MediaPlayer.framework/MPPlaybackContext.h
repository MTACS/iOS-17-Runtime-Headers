
@interface MPPlaybackContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _actionAfterQueueLoad;
    NSString * _overrideSILSectionID;
    NSString * _playActivityFeatureName;
    NSString * _playActivityQueueGroupingID;
    NSData * _playActivityRecommendationData;
    MPAVItem * _playerCurrentItem;
    NSNumber * _privateListeningOverride;
    MPMusicPlayerQueueDescriptor * _queueDescriptor;
    long long  _queueEndAction;
    long long  _repeatType;
    NSString * _sessionIdentifier;
    long long  _shuffleType;
    NSString * _siriAssetInfo;
    NSString * _siriReferenceIdentifier;
    NSDictionary * _siriWHAMetricsInfo;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic, readonly) bool containsRestorableContent;
@property (nonatomic, copy) NSString *overrideSILSectionID;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSString *playActivityQueueGroupingID;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic, copy) NSNumber *privateListeningOverride;
@property (nonatomic, copy) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic) long long queueEndAction;
@property (nonatomic) long long repeatType;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) bool shouldBecomeActive;
@property (nonatomic) long long shuffleType;
@property (nonatomic, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, copy) NSDictionary *siriWHAMetricsInfo;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, copy) ICUserIdentity *userIdentity;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (Class)queueFeederClass;
+ (bool)supportsAutoPlay;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionAfterQueueLoad;
- (void)clearStartItem;
- (bool)containsRestorableContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isReusableForPlaybackContext:(id)arg1;
- (bool)isSupported;
- (id)overrideSILSectionID;
- (id)playActivityFeatureName;
- (id)playActivityQueueGroupingID;
- (id)playActivityRecommendationData;
- (id)privateListeningOverride;
- (id)queueDescriptor;
- (long long)queueEndAction;
- (long long)repeatType;
- (id)sessionIdentifier;
- (void)setActionAfterQueueLoad:(long long)arg1;
- (void)setOverrideSILSectionID:(id)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityQueueGroupingID:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setPrivateListeningOverride:(id)arg1;
- (void)setQueueDescriptor:(id)arg1;
- (void)setQueueEndAction:(long long)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setSiriAssetInfo:(id)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setSiriWHAMetricsInfo:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (bool)shouldBecomeActive;
- (long long)shuffleType;
- (id)siriAssetInfo;
- (id)siriReferenceIdentifier;
- (id)siriWHAMetricsInfo;
- (id)userIdentity;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)arg1;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)arg1;

@end
