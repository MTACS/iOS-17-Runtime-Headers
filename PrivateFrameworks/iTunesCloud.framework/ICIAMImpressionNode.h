
@interface ICIAMImpressionNode : PBCodable <NSCopying> {
    NSString * _impressionType;
    NSString * _recoAlgoId;
}

@property (nonatomic, readonly) bool hasImpressionType;
@property (nonatomic, readonly) bool hasRecoAlgoId;
@property (nonatomic, retain) NSString *impressionType;
@property (nonatomic, retain) NSString *recoAlgoId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImpressionType;
- (bool)hasRecoAlgoId;
- (unsigned long long)hash;
- (id)impressionType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recoAlgoId;
- (void)setImpressionType:(id)arg1;
- (void)setRecoAlgoId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
