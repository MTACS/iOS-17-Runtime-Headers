
@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand {
    unsigned long long  __systemTimeOfCapture;
}

@property (nonatomic, readonly) unsigned long long _systemTimeOfCapture;

- (unsigned long long)_systemTimeOfCapture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemTime:(unsigned long long)arg1;

@end
