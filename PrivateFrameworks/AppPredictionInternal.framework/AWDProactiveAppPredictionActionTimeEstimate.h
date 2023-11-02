
@interface AWDProactiveAppPredictionActionTimeEstimate : PBCodable <NSCopying> {
    NSMutableArray * _actions;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)actionType;

- (void).cxx_destruct;
- (id)actionAtIndex:(unsigned long long)arg1;
- (id)actions;
- (unsigned long long)actionsCount;
- (void)addAction:(id)arg1;
- (void)clearActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end