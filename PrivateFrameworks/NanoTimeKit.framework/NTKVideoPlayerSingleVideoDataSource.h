
@interface NTKVideoPlayerSingleVideoDataSource : NTKVideoPlayerDataSource {
    NTKVideoPlayerListing * _listing;
}

+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andListing:(id)arg3;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 endBehavior:(unsigned long long)arg3 andFilename:(id)arg4;

- (void).cxx_destruct;
- (id)currentListing;
- (id)initForDevice:(id)arg1 listing:(id)arg2 posterImage:(id)arg3;

@end
