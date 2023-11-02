
@interface CPSImageStore : NSObject

+ (id)_storeDirectoryURL:(id*)arg1;
+ (id)keyForGEOStyleAttributes:(id)arg1 error:(id*)arg2;
+ (id)keyForImageURL:(id)arg1 error:(id*)arg2;
+ (id)keyForMapsCategoryID:(id)arg1 error:(id*)arg2;
+ (id)keyForPOIMuid:(unsigned long long)arg1 error:(id*)arg2;

- (void)_purgeOldFilesInDirectory:(id)arg1 timeToLive:(double)arg2;
- (void)purgeOldImagesWithCompletionHandler:(id /* block */)arg1;
- (id)storeImageData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)storedImageForKey:(id)arg1;
- (void)test_purgeOldFilesInDirectory:(id)arg1 timeToLive:(double)arg2;

@end
