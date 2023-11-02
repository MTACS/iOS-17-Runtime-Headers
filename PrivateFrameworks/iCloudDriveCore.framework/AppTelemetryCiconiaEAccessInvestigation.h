
@interface AppTelemetryCiconiaEAccessInvestigation : PBCodable <NSCopying> {
    int  _curGid;
    int  _curUid;
    struct { 
        unsigned int curGid : 1; 
        unsigned int curUid : 1; 
        unsigned int protectionClass : 1; 
        unsigned int stFlags : 1; 
        unsigned int stGid : 1; 
        unsigned int stMode : 1; 
        unsigned int stUid : 1; 
        unsigned int hasAcls : 1; 
    }  _has;
    bool  _hasAcls;
    int  _protectionClass;
    unsigned int  _stFlags;
    int  _stGid;
    int  _stMode;
    int  _stUid;
}

@property (nonatomic) int curGid;
@property (nonatomic) int curUid;
@property (nonatomic) bool hasAcls;
@property (nonatomic) bool hasCurGid;
@property (nonatomic) bool hasCurUid;
@property (nonatomic) bool hasHasAcls;
@property (nonatomic) bool hasProtectionClass;
@property (nonatomic) bool hasStFlags;
@property (nonatomic) bool hasStGid;
@property (nonatomic) bool hasStMode;
@property (nonatomic) bool hasStUid;
@property (nonatomic) int protectionClass;
@property (nonatomic) unsigned int stFlags;
@property (nonatomic) int stGid;
@property (nonatomic) int stMode;
@property (nonatomic) int stUid;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)curGid;
- (int)curUid;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAcls;
- (bool)hasCurGid;
- (bool)hasCurUid;
- (bool)hasHasAcls;
- (bool)hasProtectionClass;
- (bool)hasStFlags;
- (bool)hasStGid;
- (bool)hasStMode;
- (bool)hasStUid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protectionClass;
- (bool)readFrom:(id)arg1;
- (void)setCurGid:(int)arg1;
- (void)setCurUid:(int)arg1;
- (void)setHasAcls:(bool)arg1;
- (void)setHasCurGid:(bool)arg1;
- (void)setHasCurUid:(bool)arg1;
- (void)setHasHasAcls:(bool)arg1;
- (void)setHasProtectionClass:(bool)arg1;
- (void)setHasStFlags:(bool)arg1;
- (void)setHasStGid:(bool)arg1;
- (void)setHasStMode:(bool)arg1;
- (void)setHasStUid:(bool)arg1;
- (void)setProtectionClass:(int)arg1;
- (void)setStFlags:(unsigned int)arg1;
- (void)setStGid:(int)arg1;
- (void)setStMode:(int)arg1;
- (void)setStUid:(int)arg1;
- (unsigned int)stFlags;
- (int)stGid;
- (int)stMode;
- (int)stUid;
- (void)writeTo:(id)arg1;

@end
