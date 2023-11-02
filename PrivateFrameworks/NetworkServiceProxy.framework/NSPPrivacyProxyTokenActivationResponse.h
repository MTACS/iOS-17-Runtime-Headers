
@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    NSMutableArray * _activatedTokenLists;
    struct { 
        unsigned int tokenExpiryTimestamp : 1; 
    }  _has;
    unsigned long long  _tokenExpiryTimestamp;
}

@property (nonatomic, retain) NSMutableArray *activatedTokenLists;
@property (nonatomic) bool hasTokenExpiryTimestamp;
@property (nonatomic) unsigned long long tokenExpiryTimestamp;

+ (Class)activatedTokenListType;

- (void).cxx_destruct;
- (id)activatedTokenListAtIndex:(unsigned long long)arg1;
- (id)activatedTokenLists;
- (unsigned long long)activatedTokenListsCount;
- (void)addActivatedTokenList:(id)arg1;
- (void)clearActivatedTokenLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTokenExpiryTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivatedTokenLists:(id)arg1;
- (void)setHasTokenExpiryTimestamp:(bool)arg1;
- (void)setTokenExpiryTimestamp:(unsigned long long)arg1;
- (unsigned long long)tokenExpiryTimestamp;
- (void)writeTo:(id)arg1;

@end
