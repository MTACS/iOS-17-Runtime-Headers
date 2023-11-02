
@interface CAMStartPanoramaCommand : CAMCaptureCommand {
    CAMPanoramaCaptureRequest * __request;
}

@property (nonatomic, readonly) CAMPanoramaCaptureRequest *_request;

- (void).cxx_destruct;
- (id)_request;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
