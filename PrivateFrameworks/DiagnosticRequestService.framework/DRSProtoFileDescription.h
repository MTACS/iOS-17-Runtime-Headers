
@interface DRSProtoFileDescription : PBCodable <NSCopying> {
    NSString * _fileName;
    struct { 
        unsigned int logSize : 1; 
    }  _has;
    unsigned long long  _logSize;
    NSString * _logType;
}

@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, readonly) bool hasFileName;
@property (nonatomic) bool hasLogSize;
@property (nonatomic, readonly) bool hasLogType;
@property (nonatomic) unsigned long long logSize;
@property (nonatomic, retain) NSString *logType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileName;
- (bool)hasFileName;
- (bool)hasLogSize;
- (bool)hasLogType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)logSize;
- (id)logType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setHasLogSize:(bool)arg1;
- (void)setLogSize:(unsigned long long)arg1;
- (void)setLogType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
