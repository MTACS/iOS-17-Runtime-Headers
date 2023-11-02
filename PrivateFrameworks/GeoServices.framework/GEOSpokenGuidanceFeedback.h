
@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_spokenGuidanceIndex : 1; 
        unsigned int has_shortPrompt : 1; 
    }  _flags;
    bool  _shortPrompt;
    int  _spokenGuidanceIndex;
    GEOTrafficCameraInformation * _trafficCameraGuidanceFeedback;
}

@property (nonatomic) bool hasShortPrompt;
@property (nonatomic) bool hasSpokenGuidanceIndex;
@property (nonatomic, readonly) bool hasTrafficCameraGuidanceFeedback;
@property (nonatomic) bool shortPrompt;
@property (nonatomic) int spokenGuidanceIndex;
@property (nonatomic, retain) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShortPrompt;
- (bool)hasSpokenGuidanceIndex;
- (bool)hasTrafficCameraGuidanceFeedback;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShortPrompt:(bool)arg1;
- (void)setHasSpokenGuidanceIndex:(bool)arg1;
- (void)setShortPrompt:(bool)arg1;
- (void)setSpokenGuidanceIndex:(int)arg1;
- (void)setTrafficCameraGuidanceFeedback:(id)arg1;
- (bool)shortPrompt;
- (int)spokenGuidanceIndex;
- (id)trafficCameraGuidanceFeedback;
- (void)writeTo:(id)arg1;

@end
