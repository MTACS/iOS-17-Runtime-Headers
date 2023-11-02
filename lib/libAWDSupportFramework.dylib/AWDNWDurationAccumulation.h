
@interface AWDNWDurationAccumulation : PBCodable <NSCopying> {
    NSString * _name;
    NSMutableArray * _states;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *states;

+ (Class)statesType;

- (void)addStates:(id)arg1;
- (void)clearStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStates:(id)arg1;
- (id)states;
- (id)statesAtIndex:(unsigned long long)arg1;
- (unsigned long long)statesCount;
- (void)writeTo:(id)arg1;

@end
