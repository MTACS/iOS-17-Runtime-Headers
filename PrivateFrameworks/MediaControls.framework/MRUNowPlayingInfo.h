
@interface MRUNowPlayingInfo : NSObject {
    NSString * _album;
    NSString * _artist;
    NSString * _attribution;
    NSString * _composer;
    NSString * _identifier;
    bool  _isPlaying;
    NSString * _placeholder;
    NSString * _radio;
    bool  _showPlaceholder;
    NSString * _title;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *attribution;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool isPlaying;
@property (nonatomic, readonly, copy) NSString *placeholder;
@property (nonatomic, retain) NSString *radio;
@property (nonatomic, readonly) bool showPlaceholder;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (id)attribution;
- (id)composer;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 artist:(id)arg3 album:(id)arg4 radio:(id)arg5 composer:(id)arg6 attribution:(id)arg7 placeholder:(id)arg8 showPlaceholder:(bool)arg9 isPlaying:(bool)arg10;
- (id)initWithMPCResponse:(id)arg1 placeholder:(id)arg2;
- (id)initWithMRResponse:(id)arg1 placeholder:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaying;
- (id)placeholder;
- (id)radio;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setIsPlaying:(bool)arg1;
- (void)setRadio:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showPlaceholder;
- (id)stringForComponents:(unsigned long long)arg1;
- (id)stringForComponents:(unsigned long long)arg1 separator:(id)arg2;
- (id)title;

@end
