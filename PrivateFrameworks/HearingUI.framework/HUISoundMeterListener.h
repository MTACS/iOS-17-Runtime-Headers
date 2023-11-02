
@interface HUISoundMeterListener : NSObject {
    bool  _areLocalLevelsAvailable;
    bool  _areRemoteLevelsAvailable;
    <HUISoundMeterListenerDelegate> * _delegate;
    bool  _isListeningForLocalLevels;
    bool  _isListeningForRemoteLevels;
    unsigned long long  _source;
}

@property (nonatomic) bool areLocalLevelsAvailable;
@property (nonatomic) bool areRemoteLevelsAvailable;
@property (nonatomic) <HUISoundMeterListenerDelegate> *delegate;
@property (nonatomic) bool isListeningForLocalLevels;
@property (nonatomic) bool isListeningForRemoteLevels;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (void)_startLocalLevels;
- (void)_startRemoteLevels;
- (void)_stopLocalLevels;
- (void)_stopRemoteLevels;
- (void)_updateSoundMeterAvailableLocally:(bool)arg1 remotely:(bool)arg2;
- (bool)areLocalLevelsAvailable;
- (bool)areRemoteLevelsAvailable;
- (id)delegate;
- (id)initWithDelgate:(id)arg1 source:(unsigned long long)arg2;
- (bool)isListeningForLocalLevels;
- (bool)isListeningForRemoteLevels;
- (void)setAreLocalLevelsAvailable:(bool)arg1;
- (void)setAreRemoteLevelsAvailable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsListeningForLocalLevels:(bool)arg1;
- (void)setIsListeningForRemoteLevels:(bool)arg1;
- (void)setSource:(unsigned long long)arg1;
- (bool)shouldShow;
- (unsigned long long)source;
- (void)start;
- (void)stop;

@end
