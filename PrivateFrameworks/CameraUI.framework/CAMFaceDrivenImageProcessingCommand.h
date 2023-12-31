
@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand {
    bool  _faceDrivenImageProcessingEnabled;
}

@property (getter=isFaceDrivenImageProcessingEnabled, nonatomic, readonly) bool faceDrivenImageProcessingEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceDrivenImageProcessingEnabled:(bool)arg1;
- (bool)isFaceDrivenImageProcessingEnabled;

@end
