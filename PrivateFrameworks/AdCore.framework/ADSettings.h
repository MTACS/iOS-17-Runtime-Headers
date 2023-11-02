
@interface ADSettings : PBCodable <NSCopying> {
    NSString * _name;
    NSMutableArray * _parameters;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *parameters;

+ (Class)parametersType;

- (void).cxx_destruct;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
