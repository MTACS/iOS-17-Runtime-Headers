
@interface QLThumbnailRequestOperation : NSOperation {
    NSDate * _beginDate;
    bool  _executing;
    bool  _finished;
    QLThumbnailRepresentation * _mostRepresentativeThumbnail;
    QLThumbnailGenerationRequest * _request;
    id /* block */  _requestCompletionBlock;
    id /* block */  _requestUpdateBlock;
    NSObject<OS_dispatch_queue> * _serialResponseQueue;
    id /* block */  _thumbnailRequestGenerationWillStartBlock;
    NSError * _thumbnailRequestInvalidError;
}

@property (nonatomic) double minimumDimension;
@property (nonatomic, retain) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (retain) QLThumbnailGenerationRequest *request;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, copy) id /* block */ requestUpdateBlock;
@property (nonatomic) unsigned long long requestedTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialResponseQueue;
@property (nonatomic, copy) id /* block */ thumbnailRequestGenerationWillStartBlock;
@property (nonatomic, retain) NSError *thumbnailRequestInvalidError;

+ (id)operationWithThumbnailRequest:(id)arg1;

- (void).cxx_destruct;
- (void)__finishWithError:(id)arg1;
- (void)_finish;
- (bool)_finishIfNeeded;
- (void)_finishIfRequestIsInvalid;
- (void)_finishWithError:(id)arg1;
- (unsigned long long)badgeType;
- (void)cancel;
- (long long)generationBehavior;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(bool)arg5;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 iconMode:(bool)arg4;
- (id)initWithThumbnailRequest:(id)arg1;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (double)minimumDimension;
- (id)mostRepresentativeThumbnail;
- (id)request;
- (id /* block */)requestCompletionBlock;
- (id /* block */)requestUpdateBlock;
- (unsigned long long)requestedTypes;
- (id)serialResponseQueue;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGenerationBehavior:(long long)arg1;
- (void)setMinimumDimension:(double)arg1;
- (void)setMostRepresentativeThumbnail:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestCompletionBlock:(id /* block */)arg1;
- (void)setRequestUpdateBlock:(id /* block */)arg1;
- (void)setRequestedTypes:(unsigned long long)arg1;
- (void)setSerialResponseQueue:(id)arg1;
- (void)setThumbnailRequestGenerationWillStartBlock:(id /* block */)arg1;
- (void)setThumbnailRequestInvalidError:(id)arg1;
- (void)setWantsBaseline:(bool)arg1;
- (id)sharedSerialResponseQueue;
- (void)start;
- (id /* block */)thumbnailRequestGenerationWillStartBlock;
- (id)thumbnailRequestInvalidError;
- (bool)wantsBaseline;

@end
