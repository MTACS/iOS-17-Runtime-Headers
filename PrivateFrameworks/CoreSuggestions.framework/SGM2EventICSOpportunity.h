
@interface SGM2EventICSOpportunity : PBCodable <NSCopying> {
    bool  _accountSetup;
    struct { 
        unsigned int recipient : 1; 
        unsigned int source : 1; 
        unsigned int accountSetup : 1; 
    }  _has;
    NSString * _key;
    int  _recipient;
    int  _source;
}

@property (nonatomic) bool accountSetup;
@property (nonatomic) bool hasAccountSetup;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasRecipient;
@property (nonatomic) bool hasSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int recipient;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsRecipient:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (bool)accountSetup;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountSetup;
- (bool)hasKey;
- (bool)hasRecipient;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)recipient;
- (id)recipientAsString:(int)arg1;
- (void)setAccountSetup:(bool)arg1;
- (void)setHasAccountSetup:(bool)arg1;
- (void)setHasRecipient:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRecipient:(int)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
