
@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding> {
    NSString * _artworkIdentifier;
    MPNowPlayingInfoAudioFormat * _audioFormat;
    long long  _count;
    long long  _index;
    MPMediaItem * _item;
    NSString * _itemIdentifier;
    unsigned long long  _itemUID;
}

@property (nonatomic, readonly) NSString *artworkIdentifier;
@property (nonatomic, readonly) MPNowPlayingInfoAudioFormat *audioFormat;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) MPMediaItem *item;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) unsigned long long itemUID;

+ (id)nowPlayingWithItem:(id)arg1 itemIdentifier:(id)arg2 artworkIdentifier:(id)arg3 index:(long long)arg4 count:(long long)arg5;
+ (id)nowPlayingWithItem:(id)arg1 itemIdentifier:(id)arg2 itemUID:(unsigned long long)arg3 artworkIdentifier:(id)arg4 audioFormat:(id)arg5 index:(long long)arg6 count:(long long)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)artworkIdentifier;
- (id)audioFormat;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (id)itemIdentifier;
- (unsigned long long)itemUID;

@end
