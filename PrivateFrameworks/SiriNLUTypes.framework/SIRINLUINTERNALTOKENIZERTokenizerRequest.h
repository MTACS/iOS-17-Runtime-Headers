
@interface SIRINLUINTERNALTOKENIZERTokenizerRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    NSString * _locale;
    NSString * _text;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)asrId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasLocale;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
