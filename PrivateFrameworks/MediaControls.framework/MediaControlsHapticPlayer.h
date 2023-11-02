
@interface MediaControlsHapticPlayer : NSObject {
    CHHapticEngine * _engine;
    <CHHapticPatternPlayer> * _expandedButtonChangedPlayer;
}

@property (nonatomic, retain) CHHapticEngine *engine;
@property (nonatomic, retain) <CHHapticPatternPlayer> *expandedButtonChangedPlayer;

- (void).cxx_destruct;
- (void)checkError:(id)arg1;
- (void)dealloc;
- (id)engine;
- (void)expandedButtonChanged;
- (id)expandedButtonChangedPlayer;
- (void)prepare;
- (void)setEngine:(id)arg1;
- (void)setExpandedButtonChangedPlayer:(id)arg1;
- (void)setupExpandedButtonChanged;
- (void)tearDown;

@end
