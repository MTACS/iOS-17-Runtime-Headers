
@interface ATXUserMetricsPBExperiment : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _experimentName;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *experimentName;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasExperimentName;

- (void).cxx_destruct;
- (id)abGroup;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentName;
- (bool)hasAbGroup;
- (bool)hasExperimentName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
