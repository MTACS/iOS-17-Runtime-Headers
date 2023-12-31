
@interface QLThumbnailAdditionCache : NSObject {
    NSCache * _additionsCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (id)init;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2;

@end
