
@interface SGM2EventInBanner : PBCodable <NSCopying> {
    int  _app;
    int  _category;
    int  _extracted;
    struct { 
        unsigned int app : 1; 
        unsigned int category : 1; 
        unsigned int extracted : 1; 
        unsigned int state : 1; 
    }  _has;
    NSString * _key;
    int  _state;
}

@property (nonatomic) int app;
@property (nonatomic) int category;
@property (nonatomic) int extracted;
@property (nonatomic) bool hasApp;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasExtracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasState;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)StringAsCategory:(id)arg1;
- (int)StringAsExtracted:(id)arg1;
- (int)StringAsState:(id)arg1;
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
- (bool)hasState;
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
- (void)setHasState:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
