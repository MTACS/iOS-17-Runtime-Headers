
@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying> {
    NSString * _idsHandle;
    NSMutableArray * _idsHandles;
    NSString * _statusChangeType;
}

@property (nonatomic, readonly) bool hasIdsHandle;
@property (nonatomic, readonly) bool hasStatusChangeType;
@property (nonatomic, retain) NSString *idsHandle;
@property (nonatomic, retain) NSMutableArray *idsHandles;
@property (nonatomic, retain) NSString *statusChangeType;

+ (Class)idsHandlesType;

- (void).cxx_destruct;
- (void)addIdsHandles:(id)arg1;
- (void)clearIdsHandles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdsHandle;
- (bool)hasStatusChangeType;
- (unsigned long long)hash;
- (id)idsHandle;
- (id)idsHandles;
- (id)idsHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)idsHandlesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdsHandle:(id)arg1;
- (void)setIdsHandles:(id)arg1;
- (void)setStatusChangeType:(id)arg1;
- (id)statusChangeType;
- (void)writeTo:(id)arg1;

@end
