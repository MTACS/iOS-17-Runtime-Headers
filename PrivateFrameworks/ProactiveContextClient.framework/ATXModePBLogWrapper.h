
@interface ATXModePBLogWrapper : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
    }  _has;
    ATXModePBRecord * _modeRecord;
    int  _version;
}

@property (nonatomic, readonly) bool hasModeRecord;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) ATXModePBRecord *modeRecord;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModeRecord;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modeRecord;
- (bool)readFrom:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setModeRecord:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
