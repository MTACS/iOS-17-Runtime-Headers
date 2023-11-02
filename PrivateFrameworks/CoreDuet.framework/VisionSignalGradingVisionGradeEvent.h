
@interface VisionSignalGradingVisionGradeEvent : PBCodable <NSCopying> {
    NSMutableArray * _popularityEntries;
    NSMutableArray * _visionGrades;
}

@property (nonatomic, retain) NSMutableArray *popularityEntries;
@property (nonatomic, retain) NSMutableArray *visionGrades;

+ (Class)popularityEntriesType;
+ (Class)visionGradesType;

- (void).cxx_destruct;
- (void)addPopularityEntries:(id)arg1;
- (void)addVisionGrades:(id)arg1;
- (void)clearPopularityEntries;
- (void)clearVisionGrades;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)popularityEntries;
- (id)popularityEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)popularityEntriesCount;
- (bool)readFrom:(id)arg1;
- (void)setPopularityEntries:(id)arg1;
- (void)setVisionGrades:(id)arg1;
- (id)visionGrades;
- (id)visionGradesAtIndex:(unsigned long long)arg1;
- (unsigned long long)visionGradesCount;
- (void)writeTo:(id)arg1;

@end
