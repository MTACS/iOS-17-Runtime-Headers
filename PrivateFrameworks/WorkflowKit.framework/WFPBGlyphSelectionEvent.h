
@interface WFPBGlyphSelectionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int searchActive : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _key;
    bool  _searchActive;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasSearchActive;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool searchActive;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasKey;
- (bool)hasSearchActive;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)searchActive;
- (void)setHasSearchActive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSearchActive:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
