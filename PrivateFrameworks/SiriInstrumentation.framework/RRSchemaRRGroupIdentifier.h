
@interface RRSchemaRRGroupIdentifier : SISchemaInstrumentationMessage {
    NSString * _groupId;
    struct { 
        unsigned int seq : 1; 
    }  _has;
    bool  _hasGroupId;
    unsigned int  _seq;
}

@property (nonatomic, copy) NSString *groupId;
@property (nonatomic) bool hasGroupId;
@property (nonatomic) bool hasSeq;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int seq;

- (void).cxx_destruct;
- (void)deleteGroupId;
- (void)deleteSeq;
- (id)dictionaryRepresentation;
- (id)groupId;
- (bool)hasGroupId;
- (bool)hasSeq;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)seq;
- (void)setGroupId:(id)arg1;
- (void)setHasGroupId:(bool)arg1;
- (void)setHasSeq:(bool)arg1;
- (void)setSeq:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
