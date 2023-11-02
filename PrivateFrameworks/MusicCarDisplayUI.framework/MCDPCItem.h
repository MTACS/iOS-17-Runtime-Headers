
@interface MCDPCItem : NSObject {
    NSData * _artworkData;
    UIImage * _artworkImage;
    bool  _currentlyPlaying;
    NSString * _identifier;
    bool  _isCloudItem;
    bool  _isContainer;
    bool  _isExplicitItem;
    bool  _isPlayable;
    MCDPCModel * _model;
    float  _playbackProgress;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSData *artworkData;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) bool currentlyPlaying;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) bool isExplicitItem;
@property (nonatomic, readonly) bool isPlayable;
@property (nonatomic, readonly) MCDPCModel *model;
@property (nonatomic, readonly) float playbackProgress;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_initWithModel:(id)arg1 MRContentItem:(void*)arg2;
- (id)artworkData;
- (id)artworkImage;
- (bool)currentlyPlaying;
- (id)description;
- (id)identifier;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isExplicitItem;
- (bool)isPlayable;
- (id)model;
- (float)playbackProgress;
- (void)setArtworkImage:(id)arg1;
- (void)setCurrentlyPlaying:(bool)arg1;
- (id)subtitle;
- (id)title;

@end
