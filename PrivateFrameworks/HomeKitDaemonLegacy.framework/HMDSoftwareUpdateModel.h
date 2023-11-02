
@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (nonatomic, copy) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (nonatomic, copy) NSNumber *downloadSize;
@property (nonatomic, copy) NSNumber *installDuration;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, copy) NSNumber *state;

+ (id)properties;

@end
