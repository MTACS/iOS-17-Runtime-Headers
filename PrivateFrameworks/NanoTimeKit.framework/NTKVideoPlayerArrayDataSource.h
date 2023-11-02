
@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource {
    long long  _currentListingIndex;
    NSArray * _listings;
    unsigned long long  _order;
}

@property (nonatomic) unsigned long long order;

+ (id)dataSourceForDevice:(id)arg1 withFilenames:(id)arg2;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andFilenames:(id)arg3;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andListings:(id)arg3;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andFilenames:(id)arg4;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 andListings:(id)arg4;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(unsigned long long)arg3 endBehavior:(unsigned long long)arg4 andFilenames:(id)arg5;

- (void).cxx_destruct;
- (void)advanceToNextListing:(unsigned long long)arg1;
- (id)currentListing;
- (id)initForDevice:(id)arg1 withListings:(id)arg2;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;

@end
