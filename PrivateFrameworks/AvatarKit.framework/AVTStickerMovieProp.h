
@interface AVTStickerMovieProp : AVTStickerProp {
    NSMutableArray * _loadingNodes;
    AVPlayerItem * _moviePlayerItem;
    NSURL * _movieURL;
}

@property (nonatomic, retain) NSMutableArray *loadingNodes;
@property (nonatomic, retain) AVPlayerItem *moviePlayerItem;
@property (nonatomic, readonly) NSURL *movieURL;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)initWithMovieURL:(void *)arg1 size:(void *)arg2 scale:(void *)arg3 position:(void *)arg4 renderLast:(void *)arg5 orientToCamera:(void *)arg6 rotation:(void *)arg7 palettesDescriptions:(void *)arg8 modifiers:(void *)arg9 adjustments:(void *)arg10; // needs 10 arg types, found 7: id, struct CGSize { double x1; double x2; }, bool, bool, id, id, id
- (id)loadingNodes;
- (id)moviePlayerItem;
- (id)movieURL;
- (void)setLoadingNodes:(id)arg1;
- (void)setMoviePlayerItem:(id)arg1;
- (void)stickerGenerationDidEnd;
- (void)stickerGenerationWillBegin;
- (void)updateNode:(id)arg1 withContentAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)wantsTimedUpdates;

@end
