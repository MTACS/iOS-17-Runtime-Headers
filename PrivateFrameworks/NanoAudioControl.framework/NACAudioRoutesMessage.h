
@interface NACAudioRoutesMessage : PBCodable <NSCopying> {
    NSMutableArray * _audioRoutes;
    NSString * _category;
}

@property (nonatomic, retain) NSMutableArray *audioRoutes;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;

+ (Class)audioRoutesType;

- (void).cxx_destruct;
- (void)addAudioRoutes:(id)arg1;
- (id)audioRoutes;
- (id)audioRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioRoutesCount;
- (id)category;
- (void)clearAudioRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoutes:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)writeTo:(id)arg1;

@end
