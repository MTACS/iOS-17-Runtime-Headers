
@interface SIRINLUEXTERNALRRGroupIdentifier : PBCodable <NSCopying> {
    SIRICOMMONStringValue * _groupId;
    struct { 
        unsigned int seq : 1; 
    }  _has;
    int  _seq;
}

@property (nonatomic, retain) SIRICOMMONStringValue *groupId;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic) bool hasSeq;
@property (nonatomic) int seq;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupId;
- (bool)hasGroupId;
- (bool)hasSeq;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)seq;
- (void)setGroupId:(id)arg1;
- (void)setHasSeq:(bool)arg1;
- (void)setSeq:(int)arg1;
- (void)writeTo:(id)arg1;

@end
