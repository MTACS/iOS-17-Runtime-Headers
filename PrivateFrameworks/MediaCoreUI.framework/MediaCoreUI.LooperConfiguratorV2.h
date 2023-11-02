
@interface MediaCoreUI.LooperConfiguratorV2 : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _encounteredConfigurationError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _looper;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _looperPlaybackFailed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _player;
    void configurationTask;
    void currentPresentationSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentURL;
    void isPlaying;
    void looperCurrentItemsPublisher;
    void looperStatus;
    void looperStatusPublisher;
    void looperTimeControlStatusPublisher;
    void mediaServicesWereResetPublisher;
    void motionLoggingContext;
    void signposts;
}

@end
