
@interface EDSearchableIndexRichLinkItem : NSObject <EDIndexableItem, EFLoggable> {
    NSString * _identifier;
    long long  _indexingType;
    unsigned long long  _itemInstantiationTime;
    NSString * _messagePersistentID;
    EDSearchableIndexRichLinkItemMetadatum * _metadatum;
    bool  _requiresPreprocessing;
    NSString * _richLinkItemIdentifier;
    NSString * _richLinkPersistentID;
    CSSearchableItem * _searchableItem;
    NSData * _underlyingData;
}

@property (nonatomic, readonly) bool alwaysMarkAsIndexed;
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
@property (nonatomic, retain) EDSearchableIndexRichLinkItemMetadatum *metadatum;
@property (nonatomic) bool requiresPreprocessing;
@property (nonatomic, readonly, copy) NSString *richLinkItemIdentifier;
@property (nonatomic, copy) NSString *richLinkPersistentID;
@property (nonatomic, readonly) bool shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *underlyingData;

+ (id)completeSearchableIndexRichLinkItemIdentifierFromID:(id)arg1;
+ (id)log;
+ (id)messageIDandRichLinkIDFromRichLinkIdentifier:(id)arg1;
+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)alwaysMarkAsIndexed;
- (long long)compare:(id)arg1;
- (id)dateReceived;
- (id)domainIdentifier;
- (unsigned long long)estimatedSizeInBytes;
- (id)fetchIndexableAttachments;
- (bool)hasCompleteData;
- (id)identifier;
- (long long)indexingType;
- (id)initWithRichLinkItemIdentifier:(id)arg1 messagePersistentID:(id)arg2 metadatum:(id)arg3;
- (unsigned long long)itemInstantiationTime;
- (id)messagePersistentID;
- (id)metadatum;
- (void)preprocess;
- (bool)requiresPreprocessing;
- (id)richLinkItemIdentifier;
- (id)richLinkPersistentID;
- (id)searchableItem;
- (void)setIndexingType:(long long)arg1;
- (void)setMessagePersistentID:(id)arg1;
- (void)setMetadatum:(id)arg1;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (void)setRequiresPreprocessing:(bool)arg1;
- (void)setRichLinkPersistentID:(id)arg1;
- (void)setUnderlyingData:(id)arg1;
- (bool)shouldExcludeFromIndex;
- (id)underlyingData;

@end
