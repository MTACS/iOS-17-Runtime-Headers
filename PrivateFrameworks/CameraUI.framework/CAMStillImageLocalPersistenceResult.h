
@interface CAMStillImageLocalPersistenceResult : NSObject {
    NSData * _adjustmentsData;
    CAMStillImageCaptureResult * _captureResult;
    NSDate * _creationDate;
    NSError * _error;
    long long  _imageOrientation;
    NSURL * _linkedDestinationURL;
    NSURL * _localAdjustmentsURL;
    NSURL * _localDestinationURL;
    NSString * _localDiagnosticsPath;
    NSString * _localFilteredPreviewPath;
    NSString * _localPersistenceUUID;
    NSURL * _localPrivateMetadataFileURL;
    NSDictionary * _metadata;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, readonly) NSData *adjustmentsData;
@property (nonatomic, readonly) CAMStillImageCaptureResult *captureResult;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly, copy) NSURL *linkedDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localAdjustmentsURL;
@property (nonatomic, readonly, copy) NSURL *localDestinationURL;
@property (nonatomic, readonly, copy) NSString *localDiagnosticsPath;
@property (nonatomic, readonly, copy) NSString *localFilteredPreviewPath;
@property (nonatomic, readonly, copy) NSString *localPersistenceUUID;
@property (nonatomic, readonly, copy) NSURL *localPrivateMetadataFileURL;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)adjustmentsData;
- (id)captureResult;
- (id)creationDate;
- (id)error;
- (long long)imageOrientation;
- (id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 linkedURL:(id)arg3 localAdjustmentsURL:(id)arg4 diagnosticsPath:(id)arg5 filteredPreviewPath:(id)arg6 withUUID:(id)arg7 creationDate:(id)arg8 uniformTypeIdentifier:(id)arg9 orientation:(long long)arg10 metadata:(id)arg11 adjustmentsData:(id)arg12 localPrivateMetadataFileURL:(id)arg13 error:(id)arg14;
- (id)linkedDestinationURL;
- (id)localAdjustmentsURL;
- (id)localDestinationURL;
- (id)localDiagnosticsPath;
- (id)localFilteredPreviewPath;
- (id)localPersistenceUUID;
- (id)localPrivateMetadataFileURL;
- (id)metadata;
- (id)uniformTypeIdentifier;

@end
