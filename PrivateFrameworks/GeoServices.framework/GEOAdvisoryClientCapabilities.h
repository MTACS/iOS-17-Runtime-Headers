
@interface GEOAdvisoryClientCapabilities : PBCodable <NSCopying> {
    bool  _downloadOfflineMapActionSupported;
    struct { 
        unsigned int has_downloadOfflineMapActionSupported : 1; 
        unsigned int has_multipleCardsPerNoticeSupported : 1; 
    }  _flags;
    bool  _multipleCardsPerNoticeSupported;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool downloadOfflineMapActionSupported;
@property (nonatomic) bool hasDownloadOfflineMapActionSupported;
@property (nonatomic) bool hasMultipleCardsPerNoticeSupported;
@property (nonatomic) bool multipleCardsPerNoticeSupported;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)downloadOfflineMapActionSupported;
- (bool)hasDownloadOfflineMapActionSupported;
- (bool)hasMultipleCardsPerNoticeSupported;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)multipleCardsPerNoticeSupported;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDownloadOfflineMapActionSupported:(bool)arg1;
- (void)setHasDownloadOfflineMapActionSupported:(bool)arg1;
- (void)setHasMultipleCardsPerNoticeSupported:(bool)arg1;
- (void)setMultipleCardsPerNoticeSupported:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
