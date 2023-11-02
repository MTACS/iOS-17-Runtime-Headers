
@interface TVRCRapportMediaEventsManager : NSObject {
    int  _currentSetting;
    id /* block */  _eventHandler;
    NSMutableSet * _mediaCommands;
    RPMediaControlSession * _mediaSession;
    NSSet * _volumeCommands;
}

@property (nonatomic) int currentSetting;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSMutableSet *mediaCommands;
@property (nonatomic, retain) RPMediaControlSession *mediaSession;
@property (readonly) NSSet *supportedMediaCommands;
@property (nonatomic, retain) NSSet *volumeCommands;
@property (readonly) bool volumeSupported;

- (void).cxx_destruct;
- (int)_captionSettingForButtonEvent:(id)arg1;
- (int)_commandForMediaButtonEvent:(id)arg1;
- (void)_refreshCaptionState;
- (void)_setupMediaCommands:(unsigned long long)arg1;
- (int)currentSetting;
- (id /* block */)eventHandler;
- (id)initWithCompanionLinkClient:(id)arg1 eventHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)mediaCommands;
- (id)mediaSession;
- (void)sendMediaEvent:(id)arg1;
- (void)setCurrentSetting:(int)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setMediaCommands:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setVolumeCommands:(id)arg1;
- (id)supportedCaptionEvents;
- (id)supportedMediaCommands;
- (id)volumeCommands;
- (bool)volumeSupported;

@end
