
@interface SECSFAActionDropEvent : PBCodable <NSCopying> {
    bool  _excludeCount;
    bool  _excludeEvent;
    struct { 
        unsigned int excludeCount : 1; 
        unsigned int excludeEvent : 1; 
    }  _has;
}

@property (nonatomic) bool excludeCount;
@property (nonatomic) bool excludeEvent;
@property (nonatomic) bool hasExcludeCount;
@property (nonatomic) bool hasExcludeEvent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)excludeCount;
- (bool)excludeEvent;
- (bool)hasExcludeCount;
- (bool)hasExcludeEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExcludeCount:(bool)arg1;
- (void)setExcludeEvent:(bool)arg1;
- (void)setHasExcludeCount:(bool)arg1;
- (void)setHasExcludeEvent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
