
@interface PRSMutableDataStoreArchiveConfiguration : PRSDataStoreArchiveConfiguration

@property (nonatomic) bool reapNonLatestEntries;
@property (nonatomic) bool stripContentsOfConfigurations;
@property (nonatomic) bool stripDescriptors;
@property (nonatomic) bool stripScreenshots;

@end
