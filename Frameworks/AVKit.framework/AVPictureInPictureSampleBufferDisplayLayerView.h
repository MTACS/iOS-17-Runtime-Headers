
@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView {
    bool  _PIPModeEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageQueueSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownRenderSize;
    AVObservationController * _observationController;
    AVPictureInPictureIndicatorLayer * _placeholderLayer;
    AVSampleBufferDisplayLayerPlayerController * _playerController;
    AVPictureInPictureSampleBufferDisplayLayerHostView * _sbdlHostView;
    unsigned int  _sourceContextId;
    AVSampleBufferDisplayLayer * _sourceLayer;
    CALayerHost * _sourceLayerHost;
}

@property (getter=isPIPModeEnabled, nonatomic) bool PIPModeEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } imageQueueSize;
@property (nonatomic) struct CGSize { double x1; double x2; } lastKnownRenderSize;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic, retain) AVPictureInPictureIndicatorLayer *placeholderLayer;
@property (nonatomic, retain) AVSampleBufferDisplayLayerPlayerController *playerController;
@property (nonatomic, retain) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView;
@property (nonatomic) unsigned int sourceContextId;
@property (nonatomic, readonly) AVSampleBufferDisplayLayer *sourceLayer;
@property (nonatomic) CALayerHost *sourceLayerHost;

- (void).cxx_destruct;
- (id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)_updateGeometry;
- (void)_updateSourceLayerHost;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageQueueSize;
- (id)initWithSourceLayer:(id)arg1 playerController:(id)arg2;
- (bool)isPIPModeEnabled;
- (struct CGSize { double x1; double x2; })lastKnownRenderSize;
- (void)layoutSubviews;
- (id)observationController;
- (id)placeholderLayer;
- (id)playerController;
- (id)sbdlHostView;
- (void)setImageQueueSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastKnownRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObservationController:(id)arg1;
- (void)setPIPModeEnabled:(bool)arg1;
- (void)setPlaceholderLayer:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setSbdlHostView:(id)arg1;
- (void)setSourceContextId:(unsigned int)arg1;
- (void)setSourceLayerHost:(id)arg1;
- (unsigned int)sourceContextId;
- (id)sourceLayer;
- (id)sourceLayerHost;

@end
