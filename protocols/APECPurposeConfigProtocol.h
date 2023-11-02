
@protocol APECPurposeConfigProtocol <NSObject, APConfigurationProtocol>

@required

- (NSArray *)allowedPurposes;
- (NSArray *)allowedSources;
- (NSNumber *)collectionType;
- (NSString *)destination;
- (NSArray *)disallowedEvents;
- (NSNumber *)purpose;
- (NSNumber *)samplePercentage;
- (NSNumber *)samplePeriod;
- (void)setAllowedPurposes:(NSArray *)arg1;
- (void)setAllowedSources:(NSArray *)arg1;
- (void)setCollectionType:(NSNumber *)arg1;
- (void)setDestination:(NSString *)arg1;
- (void)setDisallowedEvents:(NSArray *)arg1;
- (void)setPurpose:(NSNumber *)arg1;
- (void)setSamplePercentage:(NSNumber *)arg1;
- (void)setSamplePeriod:(NSNumber *)arg1;

@end
