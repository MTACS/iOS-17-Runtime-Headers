
@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig {
    int  _captureSource;
    VCSessionUplinkVideoStreamController * _uplinkVideoStreamController;
}

@property (nonatomic, retain) VCSessionUplinkVideoStreamController *uplinkVideoStreamController;

- (int)captureSource;
- (void)dealloc;
- (void)setCaptureSource:(int)arg1;
- (void)setUplinkVideoStreamController:(id)arg1;
- (id)uplinkVideoStreamController;

@end
