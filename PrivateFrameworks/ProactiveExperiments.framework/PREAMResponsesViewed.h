
@interface PREAMResponsesViewed : PBCodable <NSCopying> {
    int  _ageGroup;
    NSString * _experimentId;
    struct { 
        unsigned int ageGroup : 1; 
        unsigned int lastViewedIndex : 1; 
        unsigned int isApricotDevice : 1; 
    }  _has;
    NSString * _hostProcess;
    bool  _isApricotDevice;
    unsigned int  _lastViewedIndex;
    NSString * _treatmentId;
    NSString * _treatmentModelName;
}

@property (nonatomic) int ageGroup;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) bool hasAgeGroup;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasHostProcess;
@property (nonatomic) bool hasIsApricotDevice;
@property (nonatomic) bool hasLastViewedIndex;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, readonly) bool hasTreatmentModelName;
@property (nonatomic, retain) NSString *hostProcess;
@property (nonatomic) bool isApricotDevice;
@property (nonatomic) unsigned int lastViewedIndex;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *treatmentModelName;

- (void).cxx_destruct;
- (int)StringAsAgeGroup:(id)arg1;
- (int)ageGroup;
- (id)ageGroupAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasAgeGroup;
- (bool)hasExperimentId;
- (bool)hasHostProcess;
- (bool)hasIsApricotDevice;
- (bool)hasLastViewedIndex;
- (bool)hasTreatmentId;
- (bool)hasTreatmentModelName;
- (unsigned long long)hash;
- (id)hostProcess;
- (bool)isApricotDevice;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastViewedIndex;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAgeGroup:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasAgeGroup:(bool)arg1;
- (void)setHasIsApricotDevice:(bool)arg1;
- (void)setHasLastViewedIndex:(bool)arg1;
- (void)setHostProcess:(id)arg1;
- (void)setIsApricotDevice:(bool)arg1;
- (void)setLastViewedIndex:(unsigned int)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTreatmentModelName:(id)arg1;
- (id)treatmentId;
- (id)treatmentModelName;
- (void)writeTo:(id)arg1;

@end
