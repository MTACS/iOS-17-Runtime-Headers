
@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (nonatomic, readonly, copy) NSArray *metadataItems;

- (id)accessibilityDescriptionItem;
- (id)captionItem;
- (id)commonItemForKey:(id)arg1 string:(id)arg2;
- (id)creationDateItem;
- (id)keywordsItem;
- (id)locationItem;
- (id)metadataItems;
- (id)titleItem;
- (id)videoDateFormatter;

@end
