
@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _deviceUID;
    void * _mediaRemotePlayerPath;
    int  _pid;
    NSString * _playerID;
    bool  _resolved;
    MPAVRoute * _route;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) NSString *deviceUID;
@property (getter=isFullyResolved, nonatomic, readonly) bool fullyResolved;
@property (getter=isInProcess, nonatomic, readonly) bool inProcess;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) void*mediaRemotePlayerPath;
@property (getter=nmr_isSystemMindfulnessPath, nonatomic, readonly) bool nmr_isSystemMindfulnessPath;
@property (getter=nmr_isSystemBooksPath, nonatomic, readonly) bool nmr_systemBooksPath;
@property (getter=nmr_isSystemPodcastsPath, nonatomic, readonly) bool nmr_systemPodcastsPath;
@property (getter=nmr_isSystemRadioPath, nonatomic, readonly) bool nmr_systemRadioPath;
@property (getter=nmr_isSystemRemotePath, nonatomic, readonly) bool nmr_systemRemotePath;
@property (getter=nmr_isSystemVoiceMemosPath, nonatomic, readonly) bool nmr_systemVoiceMemosPath;
@property (getter=nmr_isSystemWorkoutGuidedWalkPath, nonatomic, readonly) bool nmr_systemWorkoutGuidedWalkPath;
@property (getter=nmr_isSystemWorkoutPath, nonatomic, readonly) bool nmr_systemWorkoutPath;
@property (nonatomic, readonly) void*origin;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly, copy) NSString *representedBundleDisplayName;
@property (nonatomic, readonly, copy) NSString *representedBundleID;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) MPAVRoute *route;
@property (getter=isSystemMusicPath, nonatomic, readonly) bool systemMusicPath;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)deviceActivePlayerPath;
+ (id)pathWithCustomOrigin:(void*)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithDeviceUIDs:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2 isResolved:(bool)arg3;
+ (bool)supportsSecureCoding;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceUID;
- (void)encodeWithCoder:(id)arg1;
- (void)getPlaybackIntentDestinationWithCompletion:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUID:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 playerID:(id)arg4;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFullyResolved;
- (bool)isInProcess;
- (bool)isLocal;
- (bool)isResolved;
- (bool)isSystemMusicPath;
- (void*)mediaRemotePlayerPath;
- (void*)origin;
- (id)pathByAppendingPlayerIDSuffix:(id)arg1;
- (id)playerID;
- (id)representedBundleDisplayName;
- (id)representedBundleID;
- (void)resolveWithCompletion:(id /* block */)arg1;
- (void)resolveWithRouteResolvedHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)route;

// Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote

+ (id)nmr_pathWithNowPlayingURL:(id)arg1;

- (bool)nmr_isIdenticalToPath:(id)arg1;
- (bool)nmr_isSystemBooksPath;
- (bool)nmr_isSystemMindfulnessPath;
- (bool)nmr_isSystemPodcastsPath;
- (bool)nmr_isSystemRadioPath;
- (bool)nmr_isSystemRemotePath;
- (bool)nmr_isSystemVoiceMemosPath;
- (bool)nmr_isSystemWorkoutGuidedWalkPath;
- (bool)nmr_isSystemWorkoutPath;

@end
