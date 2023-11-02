
@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (nonatomic, retain) AVPlayer *player;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic, retain) AVDisplayCriteria *preferredDisplayCriteria;
@property (getter=isReadyToConnect, nonatomic) bool readyToConnect;
@property (nonatomic) bool requiresTVOutScreen;

- (void)_updateReadyToConnect;
- (void)dealloc;
- (void)enablePlayerDebugInformation:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (void)startUpdates;

@end
