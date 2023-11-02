
@interface TRILogNamespace : PBCodable <NSCopying> {
    struct { 
        unsigned int rolloutCount : 1; 
        unsigned int hashIncludesDefaults : 1; 
    }  _has;
    NSData * _hashData;
    bool  _hashIncludesDefaults;
    NSString * _latestRolloutId;
    NSString * _name;
    unsigned int  _rolloutCount;
}

@property (nonatomic, readonly) bool hasHashData;
@property (nonatomic) bool hasHashIncludesDefaults;
@property (nonatomic, readonly) bool hasLatestRolloutId;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasRolloutCount;
@property (nonatomic, retain) NSData *hashData;
@property (nonatomic) bool hashIncludesDefaults;
@property (nonatomic, retain) NSString *latestRolloutId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int rolloutCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHashData;
- (bool)hasHashIncludesDefaults;
- (bool)hasLatestRolloutId;
- (bool)hasName;
- (bool)hasRolloutCount;
- (unsigned long long)hash;
- (id)hashData;
- (bool)hashIncludesDefaults;
- (bool)isEqual:(id)arg1;
- (id)latestRolloutId;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (unsigned int)rolloutCount;
- (void)setHasHashIncludesDefaults:(bool)arg1;
- (void)setHasRolloutCount:(bool)arg1;
- (void)setHashData:(id)arg1;
- (void)setHashIncludesDefaults:(bool)arg1;
- (void)setLatestRolloutId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRolloutCount:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
