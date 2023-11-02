
@interface SGM2ContactDetailSent : PBCodable <NSCopying> {
    int  _detail;
    int  _foundIn;
    struct { 
        unsigned int detail : 1; 
        unsigned int foundIn : 1; 
        unsigned int source : 1; 
        unsigned int tokens : 1; 
        unsigned int hasName : 1; 
    }  _has;
    bool  _hasName;
    NSString * _key;
    int  _source;
    int  _tokens;
}

@property (nonatomic) int detail;
@property (nonatomic) int foundIn;
@property (nonatomic) bool hasDetail;
@property (nonatomic) bool hasFoundIn;
@property (nonatomic) bool hasHasName;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTokens;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int source;
@property (nonatomic) int tokens;

- (void).cxx_destruct;
- (int)StringAsDetail:(id)arg1;
- (int)StringAsFoundIn:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (int)StringAsTokens:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)detail;
- (id)detailAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (int)foundIn;
- (id)foundInAsString:(int)arg1;
- (bool)hasDetail;
- (bool)hasFoundIn;
- (bool)hasHasName;
- (bool)hasKey;
- (bool)hasName;
- (bool)hasSource;
- (bool)hasTokens;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetail:(int)arg1;
- (void)setFoundIn:(int)arg1;
- (void)setHasDetail:(bool)arg1;
- (void)setHasFoundIn:(bool)arg1;
- (void)setHasHasName:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTokens:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTokens:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (int)tokens;
- (id)tokensAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
