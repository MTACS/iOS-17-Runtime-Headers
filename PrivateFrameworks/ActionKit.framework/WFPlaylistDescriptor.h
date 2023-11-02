
@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding> {
    bool  _entireMusicLibrary;
    NSNumber * _persistentIdentifier;
    NSString * _playlistName;
}

@property (nonatomic, readonly) bool entireMusicLibrary;
@property (nonatomic, readonly) NSNumber *persistentIdentifier;
@property (nonatomic, readonly, copy) NSString *playlistName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)entireMusicLibrary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntireMusicLibrary;
- (id)initWithPlaylistName:(id)arg1 persistentIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)persistentIdentifier;
- (id)playlistName;

@end
