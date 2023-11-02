
@interface JFXEffectsPreviewGenerator : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _renderCompleteQueue;
    PVRenderer * _renderer;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *renderCompleteQueue;

- (void).cxx_destruct;
- (void)_renderJob:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCaches;
- (id)colorSpace;
- (void)dealloc;
- (void)generatePreviewRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithRendererOptions:(id)arg1;
- (id)name;
- (void)perfLog;
- (id)renderCompleteQueue;
- (void)setName:(id)arg1;
- (void)setRenderCompleteQueue:(id)arg1;
- (void)trackStats:(bool)arg1;

@end
