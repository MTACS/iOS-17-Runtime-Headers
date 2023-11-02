
@interface FeatureExtractObjc : NSObject {
    void acousticModelOutputAvailable;
    void allProcessedAfterStopSem;
    void audioSampleIngestionBuffer;
    void audioSampleIngestionBufferStartIndex;
    void audioSampleWorkBuffer;
    void cmvnBufferCount;
    void cmvnSlidingWindowSum;
    void config;
    void dataAvailableSem;
    void fftCalculator;
    void frameCounter;
    void frameDuration;
    void isRunning;
    void nn;
    void nnetIntakeBuffer;
    void numSamplesRemovedFromAudioSampleInjestionBuffer;
    void serialWorkQueue;
    void slidingCmvnBuffer;
    void spliceBuffer;
    void spliceBufferCounter;
    void spliceBufferCounterAll;
    void spliceBufferLength;
    void splicedVectorDim;
    void stateAccessQueue;
    void stopSignaled;
    void streamingMode;
}

- (void).cxx_destruct;
- (void)addCallbackForAcousticModelOutputAvailableWithCallback:(id /* block */)arg1;
- (void)addFloatSamples:(const float*)arg1 count:(long long)arg2;
- (void)addSamples:(const short*)arg1 count:(long long)arg2;
- (id)audioForKeywordWithStartFrame:(long long)arg1 endFrame:(long long)arg2 actualEndFrame:(long long*)arg3;
- (id)configuration;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)reset;
- (id)saveAudioBufferToFileWithPcmBuffer:(id)arg1 keyword:(id)arg2 score:(id)arg3 duration:(int)arg4;
- (id)saveAudioDataToFileWithData:(id)arg1 keyword:(id)arg2 score:(id)arg3 duration:(int)arg4;
- (id)saveStandaloneDebugSamplesToFileWithDebugAudioSamples:(id)arg1 keyword:(id)arg2 score:(id)arg3 duration:(int)arg4;
- (void)setCmvnMinWindowLengthWithCmvnMinWindowLength:(long long)arg1;
- (void)setStreamingModeWithStreaming:(bool)arg1;
- (void)startWithCompletionHandlerWithCompletionHandler:(id /* block */)arg1;
- (void)stopWithCompletionHandlerWithCompletionHandler:(id /* block */)arg1;

@end
