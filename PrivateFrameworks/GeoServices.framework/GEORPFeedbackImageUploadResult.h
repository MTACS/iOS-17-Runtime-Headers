
@interface GEORPFeedbackImageUploadResult : PBCodable <NSCopying> {
    NSMutableArray * _imageUploadInfos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *imageUploadInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageUploadInfoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageUploadInfo:(id)arg1;
- (void)clearImageUploadInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)imageUploadInfoAtIndex:(unsigned long long)arg1;
- (id)imageUploadInfos;
- (unsigned long long)imageUploadInfosCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImageUploadInfos:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
