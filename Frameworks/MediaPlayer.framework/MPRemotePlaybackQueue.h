
@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {
    NSDictionary * _mediaRemoteOptions;
    struct _MRSystemAppPlaybackQueue { } * _mediaRemotePlaybackQueue;
    NSNumber * _privateListeningOverride;
    NSString * _queueGroupingID;
    NSString * _siriReferenceIdentifier;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) struct _MRSystemAppPlaybackQueue { }*_mediaRemotePlaybackQueue;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly) NSDictionary *mediaRemoteOptions;
@property (nonatomic, readonly) NSNumber *privateListeningOverride;
@property (nonatomic, readonly, copy) NSString *queueGroupingID;
@property (nonatomic) long long replaceIntent;
@property (getter=isRequestingImmediatePlayback, nonatomic) bool requestingImmediatePlayback;
@property (nonatomic, readonly, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriRecommendationIdentifier;
@property (nonatomic, readonly, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { }*)_mediaRemotePlaybackQueue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 options:(id)arg2;
- (bool)isRequestingImmediatePlayback;
- (id)mediaRemoteOptions;
- (id)privateListeningOverride;
- (id)queueGroupingID;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (void)setRequestingImmediatePlayback:(bool)arg1;
- (void)setSiriRecommendationIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriReferenceIdentifier;
- (id)siriWHAMetricsInfo;
- (id)userIdentity;
- (id)userInfo;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)inProcessPlaybackContext:(id)arg1;

- (id)asMusicPlaybackContextWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (void)getRemoteRepresentationForPlayerPath:(id)arg1 completion:(id /* block */)arg2;

@end
