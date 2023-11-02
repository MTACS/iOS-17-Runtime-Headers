
@interface SIRINLUEXTERNALUserWantedToRepeat : PBCodable <NSCopying> {
    SIRINLUEXTERNALUsoGraph * _reference;
    SIRINLUEXTERNALUUID * _systemDialogActId;
}

@property (nonatomic, readonly) bool hasReference;
@property (nonatomic, readonly) bool hasSystemDialogActId;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *reference;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *systemDialogActId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReference;
- (bool)hasSystemDialogActId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reference;
- (void)setReference:(id)arg1;
- (void)setSystemDialogActId:(id)arg1;
- (id)systemDialogActId;
- (void)writeTo:(id)arg1;

@end
