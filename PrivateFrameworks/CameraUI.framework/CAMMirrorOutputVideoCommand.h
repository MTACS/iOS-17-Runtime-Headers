
@interface CAMMirrorOutputVideoCommand : CAMCaptureCommand {
    bool  _outputMirrored;
}

@property (getter=isOutputMirrored, nonatomic, readonly) bool outputMirrored;

- (id)_debugStringForMirroringMethod:(long long)arg1;
- (id)_debugStringForSupportedMirroringMethods:(id)arg1;
- (void)_setVideoMirrored:(bool)arg1 forOutput:(id)arg2 requirePhysicalFlip:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithOutputMirrored:(bool)arg1;
- (bool)isOutputMirrored;

@end
