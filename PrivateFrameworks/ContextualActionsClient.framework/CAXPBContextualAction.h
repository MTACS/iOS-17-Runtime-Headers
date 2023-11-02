
@interface CAXPBContextualAction : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSMutableArray * _parameters;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSMutableArray *parameters;

+ (Class)parametersType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
