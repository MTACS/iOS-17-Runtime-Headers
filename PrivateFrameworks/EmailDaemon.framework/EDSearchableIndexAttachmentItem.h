
@interface EDSearchableIndexAttachmentItem : NSObject <EDIndexableItem, EFLoggable> {
    NSString * _attachmentPersistentID;
    EFPromise * _attributeSetForFilePromise;
    NSString * _identifier;
    long long  _indexingType;
    unsigned long long  _itemInstantiationTime;
    NSString * _messagePersistentID;
    EDSearchableIndexAttachmentItemMetadatum * _metadatum;
    bool  _requiresPreprocessing;
    CSSearchableItem * _searchableItem;
    double  _searchableItemProcessingDelay;
    NSData * _underlyingData;
}

@property (nonatomic, readonly) bool alwaysMarkAsIndexed;
@property (nonatomic, copy) NSString *attachmentPersistentID;
@property (nonatomic, retain) EFPromise *attributeSetForFilePromise;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (nonatomic, readonly) bool hasCompleteData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) long long indexingType;
@property (nonatomic, readonly) unsigned long long itemInstantiationTime;
@property (nonatomic, copy) NSString *messagePersistentID;
@property (nonatomic, retain) EDSearchableIndexAttachmentItemMetadatum *metadatum;
@property (nonatomic) bool requiresPreprocessing;
@property (nonatomic) double searchableItemProcessingDelay;
@property (nonatomic, readonly) bool shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *underlyingData;

+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;
+ (id)identifierForAttachmentPersistentID:(id)arg1;
+ (id)log;

- (void).cxx_destruct;
- (bool)alwaysMarkAsIndexed;
- (id)attachmentPersistentID;
- (id)attributeSetForFilePromise;
- (long long)compare:(id)arg1;
- (id)dateReceived;
- (id)domainIdentifier;
- (unsigned long long)estimatedSizeInBytes;
- (id)fetchIndexableAttachments;
- (bool)hasCompleteData;
- (id)identifier;
- (long long)indexingType;
- (id)initWithAttachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 metadatum:(id)arg3;
- (unsigned long long)itemInstantiationTime;
- (id)messagePersistentID;
- (id)metadatum;
- (void)preprocess;
- (bool)requiresPreprocessing;
- (id)searchableItem;
- (double)searchableItemProcessingDelay;
- (void)setAttachmentPersistentID:(id)arg1;
- (void)setAttributeSetForFilePromise:(id)arg1;
- (void)setIndexingType:(long long)arg1;
- (void)setMessagePersistentID:(id)arg1;
- (void)setMetadatum:(id)arg1;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (void)setRequiresPreprocessing:(bool)arg1;
- (void)setSearchableItemProcessingDelay:(double)arg1;
- (void)setUnderlyingData:(id)arg1;
- (bool)shouldExcludeFromIndex;
- (id)underlyingData;

@end
