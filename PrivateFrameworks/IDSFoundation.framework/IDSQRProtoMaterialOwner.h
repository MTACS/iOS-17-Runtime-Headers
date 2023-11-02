
@interface IDSQRProtoMaterialOwner : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _materialTypes;
    unsigned long long  _participantId;
}

@property (nonatomic, readonly) int*materialTypes;
@property (nonatomic, readonly) unsigned long long materialTypesCount;
@property (nonatomic) unsigned long long participantId;

- (int)StringAsMaterialTypes:(id)arg1;
- (void)addMaterialType:(int)arg1;
- (void)clearMaterialTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)materialTypeAtIndex:(unsigned long long)arg1;
- (int*)materialTypes;
- (id)materialTypesAsString:(int)arg1;
- (unsigned long long)materialTypesCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)participantId;
- (bool)readFrom:(id)arg1;
- (void)setMaterialTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setParticipantId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
