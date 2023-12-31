
@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand {
    bool  __blinkDetectionEnabled;
    bool  __smileDetectionEnabled;
}

@property (getter=_isBlinkDetectionEnabled, nonatomic, readonly) bool _blinkDetectionEnabled;
@property (getter=_isSmileDetectionEnabled, nonatomic, readonly) bool _smileDetectionEnabled;

- (bool)_isBlinkDetectionEnabled;
- (bool)_isSmileDetectionEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithBlinkDetection:(bool)arg1 smileDetection:(bool)arg2;
- (id)initWithCoder:(id)arg1;

@end
