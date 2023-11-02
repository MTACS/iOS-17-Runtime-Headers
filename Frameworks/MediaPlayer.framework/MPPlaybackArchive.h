
@interface MPPlaybackArchive : NSObject <MPMutablePlaybackArchive, NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _copyOptions;
    MPPlaybackArchiveDisplayProperties * _displayProperties;
    bool  _final;
    NSData * _playbackSessionData;
    NSString * _playbackSessionIdentifier;
    NSString * _playbackSessionType;
    unsigned long long  _queueControlOptions;
    NSMutableDictionary * _storage;
    unsigned long long  _supportedOptions;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool containsAppleMusicRadioContent;
@property (nonatomic) unsigned long long copyOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPPlaybackArchiveDisplayProperties *displayProperties;
@property (nonatomic, readonly, copy) NSString *fallbackStoreIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *playbackSessionData;
@property (nonatomic, readonly, copy) NSString *playbackSessionIdentifier;
@property (nonatomic, readonly, copy) NSString *playbackSessionType;
@property (nonatomic) unsigned long long queueControlOptions;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedOptions;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValueForOption:(long long)arg1;
- (id)bundleIdentifier;
- (unsigned long long)copyOptions;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackStoreIdentifier;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 sessionIdentifier:(id)arg2 data:(id)arg3 dataType:(id)arg4 bundleIdentifier:(id)arg5 supportedOptions:(unsigned long long)arg6 displayProperties:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)playbackSessionData;
- (id)playbackSessionIdentifier;
- (id)playbackSessionType;
- (unsigned long long)queueControlOptions;
- (void)setBOOLValue:(bool)arg1 forOption:(long long)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCopyOptions:(unsigned long long)arg1;
- (void)setDisplayProperties:(id)arg1;
- (void)setFallbackStoreIdentifier:(id)arg1;
- (void)setQueueControlOptions:(unsigned long long)arg1;
- (void)setSessionIdentifier:(id)arg1 type:(id)arg2 data:(id)arg3;
- (void)setStorage:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (id)storage;
- (unsigned long long)supportedOptions;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)containsAppleMusicRadioContent;

@end
