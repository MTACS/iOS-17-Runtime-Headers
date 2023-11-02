
@interface _INPBConfidenceScore : PBCodable <NSCopying, NSSecureCoding, _INPBConfidenceScore> {
    float  _aggregateScore;
    NSArray * _components;
    struct { 
        unsigned int aggregateScore : 1; 
    }  _has;
}

@property (nonatomic) float aggregateScore;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic, readonly) unsigned long long componentsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAggregateScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)componentsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addComponents:(id)arg1;
- (float)aggregateScore;
- (void)clearComponents;
- (id)components;
- (id)componentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAggregateScore;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregateScore:(float)arg1;
- (void)setComponents:(id)arg1;
- (void)setHasAggregateScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
