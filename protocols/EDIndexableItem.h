
@protocol EDIndexableItem <NSObject>

@required

- (bool)alwaysMarkAsIndexed;
- (long long)compare:(id <EDIndexableItem>)arg1;
- (NSDate *)dateReceived;
- (NSString *)domainIdentifier;
- (unsigned long long)estimatedSizeInBytes;
- (EFFuture *)fetchIndexableAttachments;
- (bool)hasCompleteData;
- (NSString *)identifier;
- (long long)indexingType;
- (unsigned long long)itemInstantiationTime;
- (void)preprocess;
- (bool)requiresPreprocessing;
- (CSSearchableItem *)searchableItem;
- (void)setIndexingType:(long long)arg1;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (void)setUnderlyingData:(NSData *)arg1;
- (bool)shouldExcludeFromIndex;
- (NSData *)underlyingData;

@end
