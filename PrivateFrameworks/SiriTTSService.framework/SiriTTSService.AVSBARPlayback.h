
@interface SiriTTSService.AVSBARPlayback : _TtCs12_SwiftObject {
    void asbd;
    void audioPowerProvider;
    void audioQueueBufferLock;
    void audioVolumeAdjuster;
    void dataQueue;
    void discontinuedDuringPlayback;
    void enqueuedMappedAudioInfo;
    void error;
    void mappedAudioQueuedTimeStamp;
    void mappedData;
    void noRemainTasks;
    void renderer;
    void rendererEnqueuedAudioDuration;
    void startedProvidingData;
    void stateLock;
    void synchronizer;
}

- (void)handleMediaServerReset;

@end
