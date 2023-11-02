
@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) bool changesAcknowledged;
@property (nonatomic, copy) NSString *extractionGroupIdentifier;
@property (nonatomic, copy) NSString *opaqueKey;
@property (nonatomic) EKPersistentEvent *owner;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *uniqueKey;

+ (Class)meltedClass;
+ (id)relations;
+ (id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;

- (unsigned long long)changedFields;
- (bool)changesAcknowledged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)entityType;
- (id)extractionGroupIdentifier;
- (id)opaqueKey;
- (id)owner;
- (id)semanticIdentifier;
- (void)setChangedFields:(unsigned long long)arg1;
- (void)setChangesAcknowledged:(bool)arg1;
- (void)setExtractionGroupIdentifier:(id)arg1;
- (void)setOpaqueKey:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setTimestampAsDate:(id)arg1;
- (void)setUniqueKey:(id)arg1;
- (id)timestampAsDate;
- (id)uniqueKey;

@end
