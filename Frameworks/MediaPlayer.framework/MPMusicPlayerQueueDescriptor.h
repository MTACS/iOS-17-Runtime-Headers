
@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {
    bool  _disableQueueModifications;
    NSDictionary * _endTimes;
    bool  _isPrivate;
    NSString * _playActivityFeatureName;
    NSString * _playActivityQueueGroupingID;
    bool  _prioritizeStartupOverQuality;
    long long  _repeatType;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    long long  _shuffleType;
    NSDictionary * _startTimes;
}

@property (nonatomic) bool disableQueueModifications;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSDictionary *endTimes;
@property (setter=setPrivate:, nonatomic) bool isPrivate;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSString *playActivityQueueGroupingID;
@property (nonatomic) bool prioritizeStartupOverQuality;
@property (nonatomic) long long repeatType;
@property (nonatomic, readonly) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly) NSString *requestingBundleVersion;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) NSDictionary *startTimes;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableQueueModifications;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimes;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isPrivate;
- (id)playActivityFeatureName;
- (id)playActivityQueueGroupingID;
- (bool)prioritizeStartupOverQuality;
- (long long)repeatType;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setDisableQueueModifications:(bool)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityQueueGroupingID:(id)arg1;
- (void)setPrioritizeStartupOverQuality:(bool)arg1;
- (void)setPrivate:(bool)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleType;
- (id)startTimes;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)_addRequestingBundleIdentifierToPlaybackRequestEnvironment:(id)arg1;
- (bool)matchesStartItem:(id)arg1;
- (id)playbackContexts;

@end
