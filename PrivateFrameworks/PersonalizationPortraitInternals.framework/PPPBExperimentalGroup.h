
@interface PPPBExperimentalGroup : PBCodable <NSCopying> {
    NSString * _abGroupIdentifier;
    NSString * _experimentId;
}

@property (nonatomic, retain) NSString *abGroupIdentifier;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, readonly) bool hasAbGroupIdentifier;
@property (nonatomic, readonly) bool hasExperimentId;

- (void).cxx_destruct;
- (id)abGroupIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasAbGroupIdentifier;
- (bool)hasExperimentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroupIdentifier:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
