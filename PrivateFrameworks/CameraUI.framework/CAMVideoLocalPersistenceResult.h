
@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding> {
    NSData * _adjustmentsData;
    CAMCaptureCoordinationInfo * _coordinationInfo;
    NSDate * _creationDate;
    struct { 
        int width; 
        int height; 
    }  _dimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    NSURL * _filteredLinkedDestinationURL;
    NSURL * _filteredLocalDestinationURL;
    NSString * _filteredVideoPreviewPath;
    NSURL * _linkedDestinationURL;
    NSURL * _localDestinationURL;
    NSString * _localPersistenceUUID;
    NSURL * _localPrivateMetadataFileURL;
    NSArray * _metadataItems;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
}

@property (nonatomic, readonly) NSData *adjustmentsData;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) struct { int x1; int x2; } dimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) NSURL *filteredLinkedDestinationURL;
@property (nonatomic, readonly, copy) NSURL *filteredLocalDestinationURL;
@property (nonatomic, readonly, copy) NSString *filteredVideoPreviewPath;
@property (nonatomic, readonly, copy) NSURL *linkedDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localDestinationURL;
@property (nonatomic, readonly, copy) NSString *localPersistenceUUID;
@property (nonatomic, readonly, copy) NSURL *localPrivateMetadataFileURL;
@property (nonatomic, readonly) NSArray *metadataItems;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentsData;
- (id)coordinationInfo;
- (id)creationDate;
- (struct { int x1; int x2; })dimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)filteredLinkedDestinationURL;
- (id)filteredLocalDestinationURL;
- (id)filteredVideoPreviewPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 linkedURL:(id)arg3 filteredLinkedURL:(id)arg4 videoThumbnailPath:(id)arg5 UUID:(id)arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 dimensions:(struct { int x1; int x2; })arg8 stillPersistenceUUID:(id)arg9 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg10 metadataItems:(id)arg11 creationDate:(id)arg12 adjustmentsData:(id)arg13 coordinationInfo:(id)arg14 localPrivateMetadataFileURL:(id)arg15 error:(id)arg16;
- (id)linkedDestinationURL;
- (id)localDestinationURL;
- (id)localPersistenceUUID;
- (id)localPrivateMetadataFileURL;
- (id)metadataItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)stillPersistenceUUID;

@end
