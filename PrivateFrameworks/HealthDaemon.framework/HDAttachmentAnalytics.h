
@interface HDAttachmentAnalytics : NSObject {
    long long  _numberOfAttachments;
    long long  _numberOfAttachmentsCreatedLast24Hours;
    long long  _numberOfAttachmentsWithMultipleReferences;
    long long  _numberOfOrphanedAttachments;
    long long  _numberOfOrphanedReferences;
    long long  _numberOfReferences;
    long long  _numberOfReferencesCreatedLast24Hours;
    long long  _numberOfTombstones;
    long long  _numberOfTombstonesCreatedLast24Hours;
    long long  _numberOfUnconfirmedFiles;
    long long  _totalSizeOfFiles;
}

@property (nonatomic) long long numberOfAttachments;
@property (nonatomic) long long numberOfAttachmentsCreatedLast24Hours;
@property (nonatomic) long long numberOfAttachmentsWithMultipleReferences;
@property (nonatomic) long long numberOfOrphanedAttachments;
@property (nonatomic) long long numberOfOrphanedReferences;
@property (nonatomic) long long numberOfReferences;
@property (nonatomic) long long numberOfReferencesCreatedLast24Hours;
@property (nonatomic) long long numberOfTombstones;
@property (nonatomic) long long numberOfTombstonesCreatedLast24Hours;
@property (nonatomic) long long numberOfUnconfirmedFiles;
@property (nonatomic) long long totalSizeOfFiles;

- (long long)numberOfAttachments;
- (long long)numberOfAttachmentsCreatedLast24Hours;
- (long long)numberOfAttachmentsWithMultipleReferences;
- (long long)numberOfOrphanedAttachments;
- (long long)numberOfOrphanedReferences;
- (long long)numberOfReferences;
- (long long)numberOfReferencesCreatedLast24Hours;
- (long long)numberOfTombstones;
- (long long)numberOfTombstonesCreatedLast24Hours;
- (long long)numberOfUnconfirmedFiles;
- (void)setNumberOfAttachments:(long long)arg1;
- (void)setNumberOfAttachmentsCreatedLast24Hours:(long long)arg1;
- (void)setNumberOfAttachmentsWithMultipleReferences:(long long)arg1;
- (void)setNumberOfOrphanedAttachments:(long long)arg1;
- (void)setNumberOfOrphanedReferences:(long long)arg1;
- (void)setNumberOfReferences:(long long)arg1;
- (void)setNumberOfReferencesCreatedLast24Hours:(long long)arg1;
- (void)setNumberOfTombstones:(long long)arg1;
- (void)setNumberOfTombstonesCreatedLast24Hours:(long long)arg1;
- (void)setNumberOfUnconfirmedFiles:(long long)arg1;
- (void)setTotalSizeOfFiles:(long long)arg1;
- (long long)totalSizeOfFiles;

@end
