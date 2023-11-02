
@interface HMMediaSession : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMObjectMerge, NSSecureCoding, _HMMediaSessionDelegate> {
    HMAudioControl * _audioControl;
    <HMMediaSessionDelegate> * _delegate;
    HMMediaProfile * _mediaProfile;
    _HMMediaSession * _mediaSession;
    NSString * _mediaUniqueIdentifier;
    NSString * _routeUID;
    NSUUID * _uuid;
}

@property (readonly) HMAudioControl *audioControl;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMMediaProfile *mediaProfile;
@property (nonatomic, retain) _HMMediaSession *mediaSession;
@property (readonly, copy) NSString *mediaUniqueIdentifier;
@property (readonly) long long playbackState;
@property (readonly) long long repeatState;
@property (nonatomic, readonly) NSString *routeUID;
@property (readonly) long long shuffleState;
@property (readonly) unsigned long long sleepWakeState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_unconfigure;
- (id)audioControl;
- (void)configure:(id)arg1 messageTargetUUID:(id)arg2;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5 mediaUniqueIdentifier:(id)arg6 sleepWakeState:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)mediaProfile;
- (id)mediaSession;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 didUpdateRouteUID:(id)arg2;
- (void)mediaSessionDidUpdate:(id)arg1;
- (id)mediaUniqueIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageTargetUUID;
- (void)pauseWithCompletionHandler:(id /* block */)arg1;
- (long long)playbackState;
- (id)playbackStateDescription;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)arg1;
- (long long)repeatState;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (id)routeUID;
- (void)setDelegate:(id)arg1;
- (void)setMediaProfile:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)shuffleState;
- (unsigned long long)sleepWakeState;
- (id)uniqueIdentifier;
- (void)updateMediaState:(id)arg1;
- (void)updatePlaybackState:(id)arg1;
- (void)updatePlaybackState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
