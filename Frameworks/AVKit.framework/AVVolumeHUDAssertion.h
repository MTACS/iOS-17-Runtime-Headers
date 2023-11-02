
@interface AVVolumeHUDAssertion : NSObject <MPVolumeDisplaying> {
    NSString * _clientIdentifier;
    <AVVolumeHUDAssertionDelegate> * _delegate;
    bool  _prefersSystemVolumeHUDHidden;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVVolumeHUDAssertionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic, readonly) bool onScreen;
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (nonatomic) bool prefersSystemVolumeHUDHidden;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void).cxx_destruct;
- (id)_systemController;
- (id)clientIdentifier;
- (id)delegate;
- (unsigned long long)hash;
- (id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnScreenForVolumeDisplay;
- (bool)prefersSystemVolumeHUDHidden;
- (id)sceneIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setPrefersSystemVolumeHUDHidden:(bool)arg1;
- (id)volumeAudioCategory;
- (id)windowSceneForVolumeDisplay;

@end
