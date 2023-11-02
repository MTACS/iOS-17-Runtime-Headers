
@interface NSSCancelLogTransferReqMsg : PBCodable <NSCopying> {
    NSString * _logFilePath;
}

@property (nonatomic, retain) NSString *logFilePath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logFilePath;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLogFilePath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
