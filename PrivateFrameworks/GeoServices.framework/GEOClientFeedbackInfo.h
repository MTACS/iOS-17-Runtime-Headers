
@interface GEOClientFeedbackInfo : PBCodable <NSCopying> {
    NSMutableArray * _displayedBannerEventInfos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *displayedBannerEventInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayedBannerEventInfoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDisplayedBannerEventInfo:(id)arg1;
- (void)clearDisplayedBannerEventInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedBannerEventInfoAtIndex:(unsigned long long)arg1;
- (id)displayedBannerEventInfos;
- (unsigned long long)displayedBannerEventInfosCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedBannerEventInfos:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
