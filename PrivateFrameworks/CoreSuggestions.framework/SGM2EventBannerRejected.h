
@interface SGM2EventBannerRejected : PBCodable <NSCopying> {
    int  _app;
    int  _category;
    int  _extracted;
    struct { 
        unsigned int app : 1; 
        unsigned int category : 1; 
        unsigned int extracted : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) int app;
@property (nonatomic) int category;
@property (nonatomic) int extracted;
@property (nonatomic) bool hasApp;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasExtracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)StringAsCategory:(id)arg1;
- (int)StringAsExtracted:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)extracted;
- (id)extractedAsString:(int)arg1;
- (bool)hasApp;
- (bool)hasCategory;
- (bool)hasExtracted;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(int)arg1;
- (void)setCategory:(int)arg1;
- (void)setExtracted:(int)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasExtracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
