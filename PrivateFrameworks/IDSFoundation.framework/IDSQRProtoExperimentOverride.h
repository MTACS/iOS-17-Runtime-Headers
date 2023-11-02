
@interface IDSQRProtoExperimentOverride : PBCodable <NSCopying> {
    NSString * _experimentName;
    bool  _value;
}

@property (nonatomic, retain) NSString *experimentName;
@property (nonatomic) bool value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;
- (void)writeTo:(id)arg1;

@end
