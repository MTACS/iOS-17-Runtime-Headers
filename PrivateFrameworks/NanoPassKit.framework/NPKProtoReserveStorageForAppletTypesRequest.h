
@interface NPKProtoReserveStorageForAppletTypesRequest : PBRequest <NSCopying> {
    NSMutableArray * _appletTypes;
    NSData * _metadata;
}

@property (nonatomic, retain) NSMutableArray *appletTypes;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, retain) NSData *metadata;

+ (Class)appletTypesType;

- (void).cxx_destruct;
- (void)addAppletTypes:(id)arg1;
- (id)appletTypes;
- (id)appletTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appletTypesCount;
- (void)clearAppletTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setAppletTypes:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
