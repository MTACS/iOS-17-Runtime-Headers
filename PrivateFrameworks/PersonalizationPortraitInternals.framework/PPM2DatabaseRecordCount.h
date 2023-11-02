
@interface PPM2DatabaseRecordCount : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    struct { 
        unsigned int schemaVersion : 1; 
    }  _has;
    unsigned int  _schemaVersion;
    NSString * _tableName;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasSchemaVersion;
@property (nonatomic, readonly) bool hasTableName;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic, retain) NSString *tableName;

- (void).cxx_destruct;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasSchemaVersion;
- (bool)hasTableName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)schemaVersion;
- (void)setActiveTreatments:(id)arg1;
- (void)setHasSchemaVersion:(bool)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setTableName:(id)arg1;
- (id)tableName;
- (void)writeTo:(id)arg1;

@end
