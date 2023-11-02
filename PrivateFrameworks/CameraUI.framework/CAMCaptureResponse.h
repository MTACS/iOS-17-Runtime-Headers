
@interface CAMCaptureResponse : NSObject {
    CAMCaptureCoordinationInfo * _coordinationInfo;
    unsigned short  _sessionIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)coordinationInfo;
- (id)init;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3;
- (void)releaseCachedImages;
- (unsigned short)sessionIdentifier;
- (long long)type;

@end
