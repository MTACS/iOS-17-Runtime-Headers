
@interface MFMailAssetViewerHandler : NSObject {
    MFMailQLAttachmentContext * _attachmentContext;
    <MFMailAssetViewerHandlerDelegate> * _delegate;
    NSURL * _editedURL;
}

@property (nonatomic, readonly) MFMailQLAttachmentContext *attachmentContext;
@property (nonatomic, readonly) <MFMailAssetViewerHandlerDelegate> *delegate;
@property (nonatomic, readonly) NSURL *editedURL;

- (void).cxx_destruct;
- (id)attachmentContext;
- (id)delegate;
- (id)description;
- (id)editedURL;
- (id)initWithAttachmentContext:(id)arg1 delegate:(id)arg2;
- (void)launchAssetViewerForItem:(id)arg1 editContent:(bool)arg2 completion:(id /* block */)arg3;
- (void)launchAssetViewerForURL:(id)arg1 editContent:(bool)arg2 completion:(id /* block */)arg3;

@end
