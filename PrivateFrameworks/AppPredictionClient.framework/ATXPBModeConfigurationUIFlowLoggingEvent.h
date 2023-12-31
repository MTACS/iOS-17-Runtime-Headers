
@interface ATXPBModeConfigurationUIFlowLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray * _candidateEntityIdentifiers;
    NSMutableArray * _currentEntityIdentifiers;
    NSString * _dndModeUUID;
    struct { 
        unsigned int secondsSinceReferenceDate : 1; 
        unsigned int modeConfigurationEntityType : 1; 
        unsigned int modeConfigurationType : 1; 
        unsigned int modeConfigurationUI : 1; 
    }  _has;
    int  _modeConfigurationEntityType;
    int  _modeConfigurationType;
    int  _modeConfigurationUI;
    NSMutableArray * _previousEntityIdentifiers;
    double  _secondsSinceReferenceDate;
    NSMutableArray * _suggestedEntityIdentifiers;
}

@property (nonatomic, retain) NSMutableArray *candidateEntityIdentifiers;
@property (nonatomic, retain) NSMutableArray *currentEntityIdentifiers;
@property (nonatomic, retain) NSString *dndModeUUID;
@property (nonatomic, readonly) bool hasDndModeUUID;
@property (nonatomic) bool hasModeConfigurationEntityType;
@property (nonatomic) bool hasModeConfigurationType;
@property (nonatomic) bool hasModeConfigurationUI;
@property (nonatomic) bool hasSecondsSinceReferenceDate;
@property (nonatomic) int modeConfigurationEntityType;
@property (nonatomic) int modeConfigurationType;
@property (nonatomic) int modeConfigurationUI;
@property (nonatomic, retain) NSMutableArray *previousEntityIdentifiers;
@property (nonatomic) double secondsSinceReferenceDate;
@property (nonatomic, retain) NSMutableArray *suggestedEntityIdentifiers;

+ (Class)candidateEntityIdentifiersType;
+ (Class)currentEntityIdentifiersType;
+ (Class)previousEntityIdentifiersType;
+ (Class)suggestedEntityIdentifiersType;

- (void).cxx_destruct;
- (int)StringAsModeConfigurationEntityType:(id)arg1;
- (int)StringAsModeConfigurationType:(id)arg1;
- (int)StringAsModeConfigurationUI:(id)arg1;
- (void)addCandidateEntityIdentifiers:(id)arg1;
- (void)addCurrentEntityIdentifiers:(id)arg1;
- (void)addPreviousEntityIdentifiers:(id)arg1;
- (void)addSuggestedEntityIdentifiers:(id)arg1;
- (id)candidateEntityIdentifiers;
- (id)candidateEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidateEntityIdentifiersCount;
- (void)clearCandidateEntityIdentifiers;
- (void)clearCurrentEntityIdentifiers;
- (void)clearPreviousEntityIdentifiers;
- (void)clearSuggestedEntityIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentEntityIdentifiers;
- (id)currentEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentEntityIdentifiersCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dndModeUUID;
- (bool)hasDndModeUUID;
- (bool)hasModeConfigurationEntityType;
- (bool)hasModeConfigurationType;
- (bool)hasModeConfigurationUI;
- (bool)hasSecondsSinceReferenceDate;
- (unsigned long long)hash;
- (id)initFromJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)modeConfigurationEntityType;
- (id)modeConfigurationEntityTypeAsString:(int)arg1;
- (int)modeConfigurationType;
- (id)modeConfigurationTypeAsString:(int)arg1;
- (int)modeConfigurationUI;
- (id)modeConfigurationUIAsString:(int)arg1;
- (id)previousEntityIdentifiers;
- (id)previousEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)previousEntityIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (double)secondsSinceReferenceDate;
- (void)setCandidateEntityIdentifiers:(id)arg1;
- (void)setCurrentEntityIdentifiers:(id)arg1;
- (void)setDndModeUUID:(id)arg1;
- (void)setHasModeConfigurationEntityType:(bool)arg1;
- (void)setHasModeConfigurationType:(bool)arg1;
- (void)setHasModeConfigurationUI:(bool)arg1;
- (void)setHasSecondsSinceReferenceDate:(bool)arg1;
- (void)setModeConfigurationEntityType:(int)arg1;
- (void)setModeConfigurationType:(int)arg1;
- (void)setModeConfigurationUI:(int)arg1;
- (void)setPreviousEntityIdentifiers:(id)arg1;
- (void)setSecondsSinceReferenceDate:(double)arg1;
- (void)setSuggestedEntityIdentifiers:(id)arg1;
- (id)suggestedEntityIdentifiers;
- (id)suggestedEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedEntityIdentifiersCount;
- (void)writeTo:(id)arg1;

@end
