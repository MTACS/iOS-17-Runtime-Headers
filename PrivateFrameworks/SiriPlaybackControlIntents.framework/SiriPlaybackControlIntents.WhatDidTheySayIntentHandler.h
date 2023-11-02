
@interface SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling> {
    void aceServiceHelper;
    void analyticsService;
    void assertion;
    void deviceSelector;
    void deviceState;
    void initialSubtitleStateDisabled;
    void playbackController;
    void queue;
    void timer;
}

- (void).cxx_destruct;
- (void)confirmWhatDidTheySay:(id)arg1 completion:(id /* block */)arg2;
- (void)handleWhatDidTheySay:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDeviceForWhatDidTheySay:(id)arg1 withCompletion:(id /* block */)arg2;

@end
