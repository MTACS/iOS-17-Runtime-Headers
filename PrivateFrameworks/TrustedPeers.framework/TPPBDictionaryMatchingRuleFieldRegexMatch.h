
@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying> {
    NSString * _fieldName;
    NSString * _regex;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic, readonly) bool hasRegex;
@property (nonatomic, retain) NSString *regex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (bool)hasFieldName;
- (bool)hasRegex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)matches:(id)arg1 error:(id*)arg2;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regex;
- (void)setFieldName:(id)arg1;
- (void)setRegex:(id)arg1;
- (void)writeTo:(id)arg1;

@end
