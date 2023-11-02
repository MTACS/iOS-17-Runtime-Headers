
@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {
    PLInternalResource * _resource;
}

@property (nonatomic, readonly) PLManagedAsset *asset;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) NSNumber *compressedSize;
@property (nonatomic, readonly) unsigned long long compressedSizeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *index;
@property (nonatomic, readonly) short indexValue;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic) PLInternalResource *resource;
@property (nonatomic, readonly) unsigned int resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)asset;
- (id)captureDate;
- (id)compressedSize;
- (unsigned long long)compressedSizeValue;
- (id)description;
- (id)extension;
- (id)fileURL;
- (id)filename;
- (id)index;
- (short)indexValue;
- (id)initWithResource:(id)arg1;
- (id)modificationDate;
- (id)objectID;
- (id)originalFilename;
- (long long)ptpTrashedState;
- (id)resource;
- (unsigned int)resourceType;
- (void)setPtpTrashedState:(long long)arg1;
- (void)setResource:(id)arg1;
- (id)uniformTypeIdentifier;

@end
