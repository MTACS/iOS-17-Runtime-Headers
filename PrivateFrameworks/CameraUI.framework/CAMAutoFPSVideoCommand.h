
@interface CAMAutoFPSVideoCommand : CAMCaptureCommand {
    bool  _autoFPSVideoEnabled;
}

@property (getter=isAutoFPSVideoEnabled, nonatomic, readonly) bool autoFPSVideoEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAutoFPSVideoEnabled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoFPSVideoEnabled;

@end
