
@interface _PBFPosterSnapshotDefinitionCollection : NSObject <BSCancellable> {
    NSCountedSet * _displayContextRequestFailures;
    NSMapTable * _failedPreviewImageForDisplayContext;
    NSMapTable * _previewImageRequestForDisplayContext;
    NSMapTable * _receivedPreviewImageForDisplayContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSCountedSet *displayContextRequestFailures;
@property (nonatomic, readonly) NSMapTable *failedPreviewImageForDisplayContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *previewImageRequestForDisplayContext;
@property (nonatomic, readonly) NSMapTable *receivedPreviewImageForDisplayContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)displayContextRequestFailures;
- (id)failedPreviewImageForDisplayContext;
- (id)init;
- (id)previewImageRequestForDisplayContext;
- (id)receivedPreviewImageForDisplayContext;
- (long long)requestStatusForDisplayContext:(id)arg1;

@end
