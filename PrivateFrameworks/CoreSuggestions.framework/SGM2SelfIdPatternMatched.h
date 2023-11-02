
@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying> {
    struct { 
        unsigned int messageIndex : 1; 
        unsigned int nameClass : 1; 
        unsigned int nameTokens : 1; 
        unsigned int patternType : 1; 
    }  _has;
    NSString * _key;
    unsigned int  _messageIndex;
    int  _nameClass;
    unsigned int  _nameTokens;
    NSString * _patternHash;
    int  _patternType;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasMessageIndex;
@property (nonatomic) bool hasNameClass;
@property (nonatomic) bool hasNameTokens;
@property (nonatomic, readonly) bool hasPatternHash;
@property (nonatomic) bool hasPatternType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned int messageIndex;
@property (nonatomic) int nameClass;
@property (nonatomic) unsigned int nameTokens;
@property (nonatomic, retain) NSString *patternHash;
@property (nonatomic) int patternType;

- (void).cxx_destruct;
- (int)StringAsNameClass:(id)arg1;
- (int)StringAsPatternType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasMessageIndex;
- (bool)hasNameClass;
- (bool)hasNameTokens;
- (bool)hasPatternHash;
- (bool)hasPatternType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageIndex;
- (int)nameClass;
- (id)nameClassAsString:(int)arg1;
- (unsigned int)nameTokens;
- (id)patternHash;
- (int)patternType;
- (id)patternTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageIndex:(bool)arg1;
- (void)setHasNameClass:(bool)arg1;
- (void)setHasNameTokens:(bool)arg1;
- (void)setHasPatternType:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setMessageIndex:(unsigned int)arg1;
- (void)setNameClass:(int)arg1;
- (void)setNameTokens:(unsigned int)arg1;
- (void)setPatternHash:(id)arg1;
- (void)setPatternType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
