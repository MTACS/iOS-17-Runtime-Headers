
@interface PFCameraClientMetadata : NSObject <NSSecureCoding> {
    NSArray * _contactIDsInProximity;
    AVCapturePhotoPrivateClientMetadata * _privateClientMetadata;
    NSDictionary * _sharedLibraryDiagnostics;
    long long  _sharedLibraryMode;
}

@property (nonatomic, copy) NSArray *contactIDsInProximity;
@property (nonatomic, retain) AVCapturePhotoPrivateClientMetadata *privateClientMetadata;
@property (nonatomic, copy) NSDictionary *sharedLibraryDiagnostics;
@property (nonatomic) long long sharedLibraryMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIDsInProximity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivateClientMetadata:(id)arg1 contactIDsInProximity:(id)arg2 sharedLibraryMode:(long long)arg3;
- (id)privateClientMetadata;
- (void)setContactIDsInProximity:(id)arg1;
- (void)setPrivateClientMetadata:(id)arg1;
- (void)setSharedLibraryDiagnostics:(id)arg1;
- (void)setSharedLibraryMode:(long long)arg1;
- (id)sharedLibraryDiagnostics;
- (long long)sharedLibraryMode;

@end
