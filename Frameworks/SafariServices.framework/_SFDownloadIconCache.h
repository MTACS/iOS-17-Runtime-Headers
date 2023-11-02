
@interface _SFDownloadIconCache : NSObject {
    NSMutableSet * _activeRequestIdentifiers;
    NSPointerArray * _observers;
    NSMutableDictionary * _thumbnailCache;
    NSMutableDictionary * _utiCache;
}

- (void).cxx_destruct;
- (void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2;
- (void)_generateThumbnailForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_genericIconForUTI:(id)arg1;
- (id)_lookupGenericIconForType:(id)arg1;
- (void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(bool)arg2;
- (void)addObserver:(id)arg1;
- (id)iconForSource:(id)arg1;
- (id)init;
- (void)regenerateIconForSource:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
