
@interface SYDocumentSenderAvatar : NSObject {
    SYDocumentSender * _documentSender;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, readonly) SYDocumentSender *documentSender;

- (void).cxx_destruct;
- (id)_createAvatarImageRenderer;
- (id)_createContactFromPersonNameComponents:(id)arg1;
- (id)_createRenderingScopeWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 isRTL:(bool)arg3;
- (id)_defaultThumbnailImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 isRTL:(bool)arg3;
- (id)_renderAvatarImageForContact:(id)arg1 renderer:(id)arg2 renderingScope:(id)arg3;
- (id)_renderAvatarImageWithRenderer:(id)arg1 renderingScope:(id)arg2;
- (id)documentSender;
- (id)fetchThumbnailImages;
- (id)fetchThumbnailImagesWithScale:(double)arg1 isRTL:(bool)arg2;
- (void)fetchThumbnailImagesWithScale:(double)arg1 isRTL:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithDocumentSender:(id)arg1;

@end
