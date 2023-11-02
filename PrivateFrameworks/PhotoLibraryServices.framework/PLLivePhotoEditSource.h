
@interface PLLivePhotoEditSource : PLEditSource {
    PLEditSource * _photoEditSource;
    PLVideoEditSource * _videoEditSource;
}

@property (nonatomic, readonly) PLEditSource *photoEditSource;
@property (nonatomic, readonly) PLVideoEditSource *videoEditSource;

+ (id)livePhotoSourceWithPhotoURL:(id)arg1 videoComplementURL:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithPhotoSource:(id)arg1 videoComplement:(id)arg2;
- (id)initWithPhotoSource:(id)arg1 videoComplement:(id)arg2;
- (id)initWithSubstandardPhotoSource:(id)arg1 videoComplement:(id)arg2;
- (id)photoEditSource;
- (id)videoEditSource;

@end
