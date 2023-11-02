
@interface MRNowPlayingAudioFormatApplication : NSObject {
    NSString * _bundleID;
    NSString * _displayName;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) bool isFaceTime;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)displayName;
- (id)initWithBundleID:(id)arg1 displayName:(id)arg2;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (bool)isFaceTime;

@end
