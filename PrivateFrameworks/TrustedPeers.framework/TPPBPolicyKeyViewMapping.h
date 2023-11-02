
@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying> {
    TPPBDictionaryMatchingRule * _matchingRule;
    NSString * _view;
}

@property (nonatomic, readonly) bool hasMatchingRule;
@property (nonatomic, readonly) bool hasView;
@property (nonatomic, retain) TPPBDictionaryMatchingRule *matchingRule;
@property (nonatomic, retain) NSString *view;

+ (id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMatchingRule;
- (bool)hasView;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingRule;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMatchingRule:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)writeTo:(id)arg1;

@end
