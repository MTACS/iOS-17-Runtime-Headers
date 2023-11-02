
@interface AVTHUDView : UIView {
    CALayer * _arKitLatencyBar;
    UILabel * _arKitLatencyLabel;
    UILabel * _audioTimeLabel;
    UILabel * _droppedFrameLabel;
    UILabel * _fpsLabel;
    struct { 
        double totalLatency; 
        double arKitLatency; 
        double updateSyncLatency; 
        double metalLatency; 
        double timeBetweenARFrame; 
        unsigned int fps; 
        double audioTime; 
        unsigned int droppedFrame; 
        bool doubleBuffer; 
        unsigned int onlineShaderCompilationCount; 
    }  _lastFrameData;
    CALayer * _metalLatencyBar;
    UILabel * _metalLatencyLabel;
    int  _selectedGraphIndex;
    UILabel * _shaderCompilationLabel;
    UILabel * _timeBetweenARFrameLabel;
    NSMutableArray * _totalLatencyGraphLayers;
    UILabel * _totalLatencyLabel;
    CALayer * _updateLatencyBar;
    UILabel * _updateSyncLatencyLabel;
}

- (void).cxx_destruct;
- (id)_label;
- (void)_loadSubviews;
- (void)_tapAction:(id)arg1;
- (void)_updateLatencyBar:(struct { double x1; double x2; double x3; double x4; double x5; unsigned int x6; double x7; unsigned int x8; bool x9; unsigned int x10; }*)arg1;
- (void)_updateLatencyGraph:(struct { double x1; double x2; double x3; double x4; double x5; unsigned int x6; double x7; unsigned int x8; bool x9; unsigned int x10; }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateWithData:(struct { double x1; double x2; double x3; double x4; double x5; unsigned int x6; double x7; unsigned int x8; bool x9; unsigned int x10; })arg1;

@end
