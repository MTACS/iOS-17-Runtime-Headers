
@interface HDAttachmentCloudAnalytics : NSObject {
    long long  _numberOfAttachmentRecords;
    long long  _numberOfOrphanedAttachmentRecords;
    long long  _numberOfOrphanedReferenceRecords;
    long long  _numberOfReferenceRecords;
    long long  _numberOfTombstoneRecords;
    long long  _percentageOfAttachmentsWithAssetData;
}

@property (nonatomic) long long numberOfAttachmentRecords;
@property (nonatomic) long long numberOfOrphanedAttachmentRecords;
@property (nonatomic) long long numberOfOrphanedReferenceRecords;
@property (nonatomic) long long numberOfReferenceRecords;
@property (nonatomic) long long numberOfTombstoneRecords;
@property (nonatomic) long long percentageOfAttachmentsWithAssetData;

- (long long)numberOfAttachmentRecords;
- (long long)numberOfOrphanedAttachmentRecords;
- (long long)numberOfOrphanedReferenceRecords;
- (long long)numberOfReferenceRecords;
- (long long)numberOfTombstoneRecords;
- (long long)percentageOfAttachmentsWithAssetData;
- (void)setNumberOfAttachmentRecords:(long long)arg1;
- (void)setNumberOfOrphanedAttachmentRecords:(long long)arg1;
- (void)setNumberOfOrphanedReferenceRecords:(long long)arg1;
- (void)setNumberOfReferenceRecords:(long long)arg1;
- (void)setNumberOfTombstoneRecords:(long long)arg1;
- (void)setPercentageOfAttachmentsWithAssetData:(long long)arg1;

@end
