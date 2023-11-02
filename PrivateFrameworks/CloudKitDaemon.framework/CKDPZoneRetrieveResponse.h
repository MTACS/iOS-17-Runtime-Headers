
@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _anonymousZoneInfos;
    NSData * _continuationMarker;
    NSMutableArray * _zoneSummarys;
}

@property (nonatomic, retain) NSMutableArray *anonymousZoneInfos;
@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic, retain) NSMutableArray *zoneSummarys;

+ (Class)anonymousZoneInfoType;
+ (Class)zoneSummaryType;

- (void).cxx_destruct;
- (void)addAnonymousZoneInfo:(id)arg1;
- (void)addZoneSummary:(id)arg1;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)arg1;
- (id)anonymousZoneInfos;
- (unsigned long long)anonymousZoneInfosCount;
- (void)clearAnonymousZoneInfos;
- (void)clearZoneSummarys;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousZoneInfos:(id)arg1;
- (void)setContinuationMarker:(id)arg1;
- (void)setZoneSummarys:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;
- (id)zoneSummarys;
- (unsigned long long)zoneSummarysCount;

@end
