
@interface PRPosterSceneAttachmentView : PRRenderingView {
    PRPosterSceneAttachment * _attachment;
    CALayerHost * _layerHost;
}

@property (nonatomic, retain) PRPosterSceneAttachment *attachment;

- (void).cxx_destruct;
- (void)_teardownContentLayer;
- (id)attachment;
- (id)contentLayer;
- (void)invalidate;
- (bool)isEmpty;
- (id)layerHost;
- (void)layoutSubviews;
- (void)setAttachment:(id)arg1;

@end
