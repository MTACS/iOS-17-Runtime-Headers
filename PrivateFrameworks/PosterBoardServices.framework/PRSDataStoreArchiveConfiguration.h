
@interface PRSDataStoreArchiveConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _reapNonLatestEntries;
    bool  _stripContentsOfConfigurations;
    bool  _stripDescriptors;
    bool  _stripScreenshots;
}

@property (nonatomic) bool reapNonLatestEntries;
@property (nonatomic) bool stripContentsOfConfigurations;
@property (nonatomic) bool stripDescriptors;
@property (nonatomic) bool stripScreenshots;

+ (id)cliOptions;
+ (id)dataStoreArchiveConfigurationFromArgs:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)reapNonLatestEntries;
- (void)setReapNonLatestEntries:(bool)arg1;
- (void)setStripContentsOfConfigurations:(bool)arg1;
- (void)setStripDescriptors:(bool)arg1;
- (void)setStripScreenshots:(bool)arg1;
- (bool)stripContentsOfConfigurations;
- (bool)stripDescriptors;
- (bool)stripScreenshots;

@end
