
@interface WFPBContextualActionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int itemCount : 1; 
        unsigned int hasTrackpad : 1; 
    }  _has;
    bool  _hasTrackpad;
    unsigned int  _itemCount;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic) bool hasHasTrackpad;
@property (nonatomic) bool hasItemCount;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTrackpad;
@property (nonatomic) unsigned int itemCount;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasTrackpad;
- (bool)hasItemCount;
- (bool)hasKey;
- (bool)hasSource;
- (bool)hasTrackpad;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)itemCount;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasTrackpad:(bool)arg1;
- (void)setHasItemCount:(bool)arg1;
- (void)setHasTrackpad:(bool)arg1;
- (void)setItemCount:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
