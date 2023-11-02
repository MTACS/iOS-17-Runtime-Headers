
@interface SBINOpenCameraAppIntent : SBINAppIntent {
    unsigned long long  _captureDevice;
    unsigned long long  _captureMode;
}

@property (nonatomic, readonly) unsigned long long captureDevice;
@property (nonatomic, readonly) unsigned long long captureMode;

- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)captureDevice;
- (unsigned long long)captureMode;
- (unsigned long long)hash;
- (id)initWithCaptureDevice:(unsigned long long)arg1 captureMode:(unsigned long long)arg2 systemContext:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
