
@interface WBSImageFetchingURLSessionTaskManager : NSObject <NSURLSessionTaskDelegate, ReadingListMetadataProvider> {
    NSMutableDictionary * _urlSessionsByType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_downloadFirstValidImageWithURLs:(id)arg1 inURLSession:(id)arg2 failedURLDownloadsToErrorsDictionary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_urlSessionWithOptions:(unsigned long long)arg1;
- (void)downloadFirstValidImageWithURLs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 completionHandlerIncludingErrors:(id /* block */)arg3;
- (id)init;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (void)fetchThumbnailForBookmark:(id)arg1 completion:(id /* block */)arg2;

@end
