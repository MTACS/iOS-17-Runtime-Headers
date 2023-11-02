
@interface SGM2SearchResultsIncludedPureSuggestion : PBCodable <NSCopying> {
    int  _app;
    struct { 
        unsigned int app : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) int app;
@property (nonatomic) bool hasApp;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApp;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(int)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
