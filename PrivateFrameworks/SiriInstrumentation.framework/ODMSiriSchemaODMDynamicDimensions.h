
@interface ODMSiriSchemaODMDynamicDimensions : SISchemaInstrumentationMessage {
    int  _audioInterface;
    struct { 
        unsigned int viewMode : 1; 
        unsigned int audioInterface : 1; 
        unsigned int taskType : 1; 
        unsigned int taskAppBundleId : 1; 
    }  _has;
    bool  _hasSiriInputLocale;
    SISchemaISOLocale * _siriInputLocale;
    int  _taskAppBundleId;
    int  _taskType;
    int  _viewMode;
}

@property (nonatomic) int audioInterface;
@property (nonatomic) bool hasAudioInterface;
@property (nonatomic) bool hasSiriInputLocale;
@property (nonatomic) bool hasTaskAppBundleId;
@property (nonatomic) bool hasTaskType;
@property (nonatomic) bool hasViewMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) int taskAppBundleId;
@property (nonatomic) int taskType;
@property (nonatomic) int viewMode;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioInterface;
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskAppBundleId;
- (void)deleteTaskType;
- (void)deleteViewMode;
- (id)dictionaryRepresentation;
- (bool)hasAudioInterface;
- (bool)hasSiriInputLocale;
- (bool)hasTaskAppBundleId;
- (bool)hasTaskType;
- (bool)hasViewMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioInterface:(int)arg1;
- (void)setHasAudioInterface:(bool)arg1;
- (void)setHasSiriInputLocale:(bool)arg1;
- (void)setHasTaskAppBundleId:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setHasViewMode:(bool)arg1;
- (void)setSiriInputLocale:(id)arg1;
- (void)setTaskAppBundleId:(int)arg1;
- (void)setTaskType:(int)arg1;
- (void)setViewMode:(int)arg1;
- (id)siriInputLocale;
- (id)suppressMessageUnderConditions;
- (int)taskAppBundleId;
- (int)taskType;
- (int)viewMode;
- (void)writeTo:(id)arg1;

@end
