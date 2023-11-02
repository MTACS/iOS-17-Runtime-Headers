
@interface HDCloudSyncCodableSharedSummaryTransactionRecord : PBCodable <NSCopying> {
    NSData * _metadata;
    NSString * _sourceDeviceIdentifier;
    NSMutableArray * _summaryIdentifiers;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasSourceDeviceIdentifier;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSString *sourceDeviceIdentifier;
@property (nonatomic, retain) NSMutableArray *summaryIdentifiers;
@property (nonatomic, retain) NSString *uuid;

+ (Class)summaryIdentifiersType;

- (void).cxx_destruct;
- (void)addSummaryIdentifiers:(id)arg1;
- (void)clearSummaryIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (bool)hasSourceDeviceIdentifier;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSourceDeviceIdentifier:(id)arg1;
- (void)setSummaryIdentifiers:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sourceDeviceIdentifier;
- (id)summaryIdentifiers;
- (id)summaryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryIdentifiersCount;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
