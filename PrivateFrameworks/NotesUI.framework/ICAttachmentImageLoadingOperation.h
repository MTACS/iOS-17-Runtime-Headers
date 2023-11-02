
@interface ICAttachmentImageLoadingOperation : NSOperation {
    NSManagedObjectID * _attachmentObjectID;
    short  _attachmentType;
    NSCache * _cache;
    NSString * _cacheKey;
    NSMutableArray * _completionHandlers;
    bool  _forceFullSizeImage;
    NSURL * _mediaURL;
}

@property (nonatomic, retain) NSManagedObjectID *attachmentObjectID;
@property (nonatomic) short attachmentType;
@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, copy) NSString *cacheKey;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic) bool forceFullSizeImage;
@property (nonatomic, retain) NSURL *mediaURL;

- (void).cxx_destruct;
- (id /* block */)addCompletionHandler:(id /* block */)arg1;
- (id)attachmentObjectID;
- (short)attachmentType;
- (id)cache;
- (id)cacheKey;
- (id)completionHandlers;
- (bool)forceFullSizeImage;
- (id)initWithCache:(id)arg1 attachment:(id)arg2 attachmentType:(short)arg3 forceFullSizeImage:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)main;
- (id)mediaURL;
- (void)removeCompletionHandler:(id /* block */)arg1 cancelIfNoneLeft:(bool)arg2;
- (void)setAttachmentObjectID:(id)arg1;
- (void)setAttachmentType:(short)arg1;
- (void)setCache:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setForceFullSizeImage:(bool)arg1;
- (void)setMediaURL:(id)arg1;

@end