
@interface CAMPersistenceResponse : NSObject {
    CAMCaptureCoordinationInfo * _coordinationInfo;
    NSDate * _creationDate;
    NSURL * _persistenceURL;
    NSString * _persistenceUUID;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    UIImage * _scrubberImage;
    unsigned short  _sessionIdentifier;
}

@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly, copy) UIImage *scrubberImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;

- (void).cxx_destruct;
- (id)coordinationInfo;
- (id)creationDate;
- (id)description;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 pixelSize:(struct CGSize { double x1; double x2; })arg6 coordinationInfo:(id)arg7;
- (id)persistenceURL;
- (id)persistenceUUID;
- (struct CGSize { double x1; double x2; })pixelSize;
- (id)scrubberImage;
- (unsigned short)sessionIdentifier;

@end
