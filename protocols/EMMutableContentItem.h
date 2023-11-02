
@protocol EMMutableContentItem <EMExtendedContentItem>

@required

- (NSArray *)availableRepresentations;
- (NSString *)contentID;
- (long long)dataTransferByteCount;
- (NSString *)displayName;
- (int)exchangeEventUID;
- (bool)isAvailableLocally;
- (EMMailDropMetadata *)mailDropMetadata;
- (void)setAvailableRepresentations:(NSArray *)arg1;
- (void)setContentID:(NSString *)arg1;
- (void)setDataTransferByteCount:(long long)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setExchangeEventUID:(int)arg1;
- (void)setIsAvailableLocally:(bool)arg1;
- (void)setMailDropMetadata:(EMMailDropMetadata *)arg1;
- (void)setStorageByteCount:(long long)arg1;
- (void)setUniformTypeIdentifier:(NSString *)arg1;
- (long long)storageByteCount;
- (NSString *)uniformTypeIdentifier;

@end
