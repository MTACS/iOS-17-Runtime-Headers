
@interface VCCellularAudioTapIO : NSObject {
    VCAudioIO * _audioIO;
    VCAudioPowerSpectrumSource * _powerSpectrumSource;
    struct tagVCCellularAudioTapIORealtimeContext { 
        long long streamToken; 
        struct _VCAudioPowerSpectrumSourceRealtimeContext {} *powerSpectrumSourceRealtimeContext; 
    }  _realtimeContext;
}

@property (nonatomic, retain) VCAudioIO *audioIO;
@property (nonatomic, readonly) VCAudioPowerSpectrumSource *powerSpectrumSource;
@property (nonatomic, readonly) struct tagVCCellularAudioTapIORealtimeContext { long long x1; struct _VCAudioPowerSpectrumSourceRealtimeContext {} *x2; }*realtimeContext;
@property (nonatomic, readonly) long long streamToken;

- (id)audioIO;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 powerSpectrumSource:(id)arg2;
- (id)powerSpectrumSource;
- (struct tagVCCellularAudioTapIORealtimeContext { long long x1; struct _VCAudioPowerSpectrumSourceRealtimeContext {} *x2; }*)realtimeContext;
- (void)setAudioIO:(id)arg1;
- (long long)streamToken;

@end
