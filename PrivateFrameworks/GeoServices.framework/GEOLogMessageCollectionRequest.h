
@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _logMessages;
}

@property (nonatomic, retain) NSMutableArray *logMessages;

+ (bool)isValid:(id)arg1;
+ (Class)logMessageType;

- (void).cxx_destruct;
- (void)addLogMessage:(id)arg1;
- (void)clearLogMessages;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)logMessageAtIndex:(unsigned long long)arg1;
- (id)logMessages;
- (unsigned long long)logMessagesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setLogMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
