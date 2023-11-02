
@interface AWDWiFiDPSNotification : PBCodable <NSCopying> {
    bool  _facetimeCallInProgress;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int problemAC : 1; 
        unsigned int symptom : 1; 
        unsigned int facetimeCallInProgress : 1; 
    }  _has;
    unsigned int  _problemAC;
    int  _symptom;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool facetimeCallInProgress;
@property (nonatomic) bool hasFacetimeCallInProgress;
@property (nonatomic) bool hasProblemAC;
@property (nonatomic) bool hasSymptom;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int problemAC;
@property (nonatomic) int symptom;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsSymptom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)facetimeCallInProgress;
- (bool)hasFacetimeCallInProgress;
- (bool)hasProblemAC;
- (bool)hasSymptom;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)problemAC;
- (bool)readFrom:(id)arg1;
- (void)setFacetimeCallInProgress:(bool)arg1;
- (void)setHasFacetimeCallInProgress:(bool)arg1;
- (void)setHasProblemAC:(bool)arg1;
- (void)setHasSymptom:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProblemAC:(unsigned int)arg1;
- (void)setSymptom:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)symptom;
- (id)symptomAsString:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
