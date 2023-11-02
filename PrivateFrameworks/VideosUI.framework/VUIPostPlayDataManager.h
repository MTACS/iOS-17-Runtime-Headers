
@interface VUIPostPlayDataManager : NSObject

+ (void)_fetchContentFromLibraryForCurrentMediaItem:(id)arg1 completion:(id /* block */)arg2;
+ (void)_fetchPostPlayItemFromJSForSeriesCanonicalID:(id)arg1 andVideoCanonicalID:(id)arg2 completion:(id /* block */)arg3;
+ (void)_fetchPostPlayItemFromLibraryContentForStoreID:(id)arg1 completion:(id /* block */)arg2;
+ (id)_generateMediaInfoFromJSResponse:(id)arg1 canAutoPlay:(bool)arg2;
+ (id)_metricsForPostPlayMediaItemFromLibrary:(id)arg1;
+ (void)fetchPostPlayItemForCurrentMediaItem:(id)arg1 completion:(id /* block */)arg2;

@end
