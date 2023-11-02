
@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol> {
    unsigned short  _audioSpectrumBinCount;
    struct _VCAudioPowerSpectrumMeterRealtimeContext { 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
            unsigned long long countEntries; 
        } streams; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        double nextDeliveryTime; 
        double audioSpectrumRefreshRate; 
        struct atomic_flag { 
            _Atomic bool _Value; 
        } isProcessingOutput; 
        double nextHeatlhPrintTime; 
        struct __CFDictionary {} *outputPowerSpectrums; 
        id powerSpectrumMeterDelegate; 
        void *powerSpectrumMeterDelegateContext; 
    }  _realtimeContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*realtimeContext;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;
- (void*)realtimeContext;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 powerSpectrumKey:(id)arg2 spectrumSource:(id)arg3;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)unregisterAllStreams;

@end
