
@interface NTKVideoPlayerDataSource : NSObject {
    NTKVideoPlayerListing * _currentListing;
    UIImage * _posterImage;
}

@property (nonatomic, retain) NTKVideoPlayerListing *currentListing;
@property (nonatomic, retain) UIImage *posterImage;

- (void).cxx_destruct;
- (void)advanceToNextListing:(unsigned long long)arg1;
- (id)currentListing;
- (id)init;
- (id)listingToQueueOncePlaybackStarts;
- (id)listingsToQueueAfterCurrent;
- (id)posterImage;
- (void)setCurrentListing:(id)arg1;
- (void)setPosterImage:(id)arg1;

@end
