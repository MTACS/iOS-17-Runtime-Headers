
@interface AVSecondScreenDebugAssistant : NSObject {
    CADisplay * _debugInfoDisplay;
    NSString * _debugText;
    AVObservationController * _observationController;
    AVPlayer * _player;
    UIScene * _scene;
    AVSecondScreenViewController * _secondScreenViewController;
}

@property (nonatomic, retain) CADisplay *debugInfoDisplay;
@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) UIScene *scene;
@property (nonatomic) AVSecondScreenViewController *secondScreenViewController;

- (void).cxx_destruct;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg1 currentVideoDynamicRange:(id)arg2;
- (id)_currentDisplay;
- (id)_currentEnabledVideoTrack;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;
- (void)dealloc;
- (id)debugInfoDisplay;
- (id)debugText;
- (id)init;
- (id)observationController;
- (id)player;
- (id)scene;
- (id)secondScreenViewController;
- (void)setDebugInfoDisplay:(id)arg1;
- (void)setDebugText:(id)arg1;
- (void)setObservationController:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSecondScreenViewController:(id)arg1;

@end
