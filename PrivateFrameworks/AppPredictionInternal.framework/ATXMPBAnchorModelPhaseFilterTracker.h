
@interface ATXMPBAnchorModelPhaseFilterTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _anchorType;
    struct { 
        unsigned int numEndingCandidates : 1; 
        unsigned int numStartingCandidates : 1; 
        unsigned int phaseDescription : 1; 
    }  _has;
    unsigned int  _numEndingCandidates;
    unsigned int  _numStartingCandidates;
    int  _phaseDescription;
    NSString * _phaseType;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *anchorType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasAnchorType;
@property (nonatomic) bool hasNumEndingCandidates;
@property (nonatomic) bool hasNumStartingCandidates;
@property (nonatomic) bool hasPhaseDescription;
@property (nonatomic, readonly) bool hasPhaseType;
@property (nonatomic) unsigned int numEndingCandidates;
@property (nonatomic) unsigned int numStartingCandidates;
@property (nonatomic) int phaseDescription;
@property (nonatomic, retain) NSString *phaseType;

- (void).cxx_destruct;
- (int)StringAsPhaseDescription:(id)arg1;
- (id)abGroup;
- (id)anchorType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasAnchorType;
- (bool)hasNumEndingCandidates;
- (bool)hasNumStartingCandidates;
- (bool)hasPhaseDescription;
- (bool)hasPhaseType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numEndingCandidates;
- (unsigned int)numStartingCandidates;
- (int)phaseDescription;
- (id)phaseDescriptionAsString:(int)arg1;
- (id)phaseType;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setAnchorType:(id)arg1;
- (void)setHasNumEndingCandidates:(bool)arg1;
- (void)setHasNumStartingCandidates:(bool)arg1;
- (void)setHasPhaseDescription:(bool)arg1;
- (void)setNumEndingCandidates:(unsigned int)arg1;
- (void)setNumStartingCandidates:(unsigned int)arg1;
- (void)setPhaseDescription:(int)arg1;
- (void)setPhaseType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
