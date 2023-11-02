
@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)searchableIndexItemWithIdentifier:(id)arg1 message:(id)arg2 type:(long long)arg3;
+ (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
+ (id)suggestionsSearchableItemWithMessage:(id)arg1;

- (bool)_shouldAutoDownloadAttachment:(id)arg1;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (id)fetchIndexableAttachments;
- (void)preprocess;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (bool)shouldExcludeFromIndex;

@end
