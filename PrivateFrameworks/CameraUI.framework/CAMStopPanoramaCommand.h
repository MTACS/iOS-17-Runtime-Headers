
@interface CAMStopPanoramaCommand : CAMCaptureCommand {
    bool  __interrupted;
}

@property (nonatomic, readonly) bool _interrupted;

- (bool)_interrupted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterrupted:(bool)arg1;

@end
