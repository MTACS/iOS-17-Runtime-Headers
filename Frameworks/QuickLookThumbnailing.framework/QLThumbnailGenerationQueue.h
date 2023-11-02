
@interface QLThumbnailGenerationQueue : NSObject {
    NSOperationQueue * _queue;
    NSMutableDictionary * _queuedURLs;
}

@property (retain) NSOperationQueue *queue;
@property (retain) NSMutableDictionary *queuedURLs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1;
- (id)queue;
- (id)queuedURLs;
- (void)setQueue:(id)arg1;
- (void)setQueuedURLs:(id)arg1;

@end
