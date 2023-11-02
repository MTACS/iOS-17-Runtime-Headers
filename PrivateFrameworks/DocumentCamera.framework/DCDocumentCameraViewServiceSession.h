
@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding> {
    ICDocCamImageCache * _docCamImageCache;
    DCDocumentCameraViewServiceSessionRequest * _sessionRequest;
    int  _viewServicePid;
}

@property (nonatomic, readonly) ICDocCamImageCache *docCamImageCache;
@property (nonatomic, readonly) DCDocumentCameraViewServiceSessionRequest *sessionRequest;
@property (nonatomic, readonly) int viewServicePid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)docCamImageCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionRequest:(id)arg1;
- (id)sessionRequest;
- (void)setup;
- (int)viewServicePid;

@end
