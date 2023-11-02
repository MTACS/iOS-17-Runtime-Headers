
@interface ATXPBSharedDigestEngagementTrackingMetrics : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { 
        unsigned int numDigestExpansions : 1; 
        unsigned int numEngagementsAfterExpiration : 1; 
        unsigned int numEngagementsInScheduled : 1; 
        unsigned int numEngagementsInUpcoming : 1; 
        unsigned int numExpansions : 1; 
        unsigned int sectionPosition : 1; 
        unsigned int sectionSize : 1; 
    }  _has;
    unsigned long long  _numDigestExpansions;
    unsigned long long  _numEngagementsAfterExpiration;
    unsigned long long  _numEngagementsInScheduled;
    unsigned long long  _numEngagementsInUpcoming;
    unsigned long long  _numExpansions;
    NSString * _sectionIdentifier;
    unsigned long long  _sectionPosition;
    unsigned long long  _sectionSize;
}

@property (nonatomic) bool hasNumDigestExpansions;
@property (nonatomic) bool hasNumEngagementsAfterExpiration;
@property (nonatomic) bool hasNumEngagementsInScheduled;
@property (nonatomic) bool hasNumEngagementsInUpcoming;
@property (nonatomic) bool hasNumExpansions;
@property (nonatomic, readonly) bool hasSectionIdentifier;
@property (nonatomic) bool hasSectionPosition;
@property (nonatomic) bool hasSectionSize;
@property (nonatomic) unsigned long long numDigestExpansions;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) unsigned long long numExpansions;
@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) unsigned long long sectionSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumDigestExpansions;
- (bool)hasNumEngagementsAfterExpiration;
- (bool)hasNumEngagementsInScheduled;
- (bool)hasNumEngagementsInUpcoming;
- (bool)hasNumExpansions;
- (bool)hasSectionIdentifier;
- (bool)hasSectionPosition;
- (bool)hasSectionSize;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numDigestExpansions;
- (unsigned long long)numEngagementsAfterExpiration;
- (unsigned long long)numEngagementsInScheduled;
- (unsigned long long)numEngagementsInUpcoming;
- (unsigned long long)numExpansions;
- (bool)readFrom:(id)arg1;
- (id)sectionIdentifier;
- (unsigned long long)sectionPosition;
- (unsigned long long)sectionSize;
- (void)setHasNumDigestExpansions:(bool)arg1;
- (void)setHasNumEngagementsAfterExpiration:(bool)arg1;
- (void)setHasNumEngagementsInScheduled:(bool)arg1;
- (void)setHasNumEngagementsInUpcoming:(bool)arg1;
- (void)setHasNumExpansions:(bool)arg1;
- (void)setHasSectionPosition:(bool)arg1;
- (void)setHasSectionSize:(bool)arg1;
- (void)setNumDigestExpansions:(unsigned long long)arg1;
- (void)setNumEngagementsAfterExpiration:(unsigned long long)arg1;
- (void)setNumEngagementsInScheduled:(unsigned long long)arg1;
- (void)setNumEngagementsInUpcoming:(unsigned long long)arg1;
- (void)setNumExpansions:(unsigned long long)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionPosition:(unsigned long long)arg1;
- (void)setSectionSize:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
