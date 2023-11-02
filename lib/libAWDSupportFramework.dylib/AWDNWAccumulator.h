
@interface AWDNWAccumulator : PBCodable <NSCopying> {
    NSMutableArray * _durations;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *durations;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

+ (Class)durationsType;

- (void)addDurations:(id)arg1;
- (void)clearDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)durations;
- (id)durationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)durationsCount;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDurations:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
