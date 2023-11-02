
@interface FLOWSchemaFLOWProfileSwitchContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int profileSwitchMethod : 1; 
        unsigned int profileSwitchByNameType : 1; 
        unsigned int profileSwitchOutcome : 1; 
        unsigned int profileSwitchFailureReason : 1; 
        unsigned int profileSwitchDurationInMs : 1; 
    }  _has;
    int  _profileSwitchByNameType;
    unsigned int  _profileSwitchDurationInMs;
    int  _profileSwitchFailureReason;
    int  _profileSwitchMethod;
    int  _profileSwitchOutcome;
}

@property (nonatomic) bool hasProfileSwitchByNameType;
@property (nonatomic) bool hasProfileSwitchDurationInMs;
@property (nonatomic) bool hasProfileSwitchFailureReason;
@property (nonatomic) bool hasProfileSwitchMethod;
@property (nonatomic) bool hasProfileSwitchOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int profileSwitchByNameType;
@property (nonatomic) unsigned int profileSwitchDurationInMs;
@property (nonatomic) int profileSwitchFailureReason;
@property (nonatomic) int profileSwitchMethod;
@property (nonatomic) int profileSwitchOutcome;

- (void)deleteProfileSwitchByNameType;
- (void)deleteProfileSwitchDurationInMs;
- (void)deleteProfileSwitchFailureReason;
- (void)deleteProfileSwitchMethod;
- (void)deleteProfileSwitchOutcome;
- (id)dictionaryRepresentation;
- (bool)hasProfileSwitchByNameType;
- (bool)hasProfileSwitchDurationInMs;
- (bool)hasProfileSwitchFailureReason;
- (bool)hasProfileSwitchMethod;
- (bool)hasProfileSwitchOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)profileSwitchByNameType;
- (unsigned int)profileSwitchDurationInMs;
- (int)profileSwitchFailureReason;
- (int)profileSwitchMethod;
- (int)profileSwitchOutcome;
- (bool)readFrom:(id)arg1;
- (void)setHasProfileSwitchByNameType:(bool)arg1;
- (void)setHasProfileSwitchDurationInMs:(bool)arg1;
- (void)setHasProfileSwitchFailureReason:(bool)arg1;
- (void)setHasProfileSwitchMethod:(bool)arg1;
- (void)setHasProfileSwitchOutcome:(bool)arg1;
- (void)setProfileSwitchByNameType:(int)arg1;
- (void)setProfileSwitchDurationInMs:(unsigned int)arg1;
- (void)setProfileSwitchFailureReason:(int)arg1;
- (void)setProfileSwitchMethod:(int)arg1;
- (void)setProfileSwitchOutcome:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
