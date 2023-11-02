
@interface GEOLogMsgStateActionButtonDetails : PBCodable <NSCopying> {
    NSMutableArray * _actionButtonDetails;
}

@property (nonatomic, retain) NSMutableArray *actionButtonDetails;

+ (Class)actionButtonDetailsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)actionButtonDetails;
- (id)actionButtonDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionButtonDetailsCount;
- (void)addActionButtonDetails:(id)arg1;
- (void)clearActionButtonDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionButtonDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
