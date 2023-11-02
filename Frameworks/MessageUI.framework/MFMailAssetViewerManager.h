
@interface MFMailAssetViewerManager : NSObject <MFMailAssetViewerHandlerDelegate> {
    <MFMailAssetViewerManagerDelegate> * _delegate;
    EFLocked * _handlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMailAssetViewerManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EFLocked *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)assetViewer:(id)arg1 editCompletedWithURL:(id)arg2;
- (void)assetViewerEditCanceled:(id)arg1;
- (void)assetViewerSceneClosed:(id)arg1;
- (void)assetViewerSceneLaunched:(id)arg1;
- (id)delegate;
- (id)handlerForAttachmentContext:(id)arg1;
- (id)handlers;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandlers:(id)arg1;

@end
