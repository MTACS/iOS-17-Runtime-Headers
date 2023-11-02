
@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingDependentSignals : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCECommonAppDependentSignals * _commonDependent;
    struct { 
        unsigned int workoutType : 1; 
        unsigned int isIndoorWorkout : 1; 
    }  _has;
    bool  _hasCommonDependent;
    bool  _isIndoorWorkout;
    int  _workoutType;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCECommonAppDependentSignals *commonDependent;
@property (nonatomic) bool hasCommonDependent;
@property (nonatomic) bool hasIsIndoorWorkout;
@property (nonatomic) bool hasWorkoutType;
@property (nonatomic) bool isIndoorWorkout;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int workoutType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonDependent;
- (void)deleteCommonDependent;
- (void)deleteIsIndoorWorkout;
- (void)deleteWorkoutType;
- (id)dictionaryRepresentation;
- (bool)hasCommonDependent;
- (bool)hasIsIndoorWorkout;
- (bool)hasWorkoutType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndoorWorkout;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommonDependent:(id)arg1;
- (void)setHasCommonDependent:(bool)arg1;
- (void)setHasIsIndoorWorkout:(bool)arg1;
- (void)setHasWorkoutType:(bool)arg1;
- (void)setIsIndoorWorkout:(bool)arg1;
- (void)setWorkoutType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)workoutType;
- (void)writeTo:(id)arg1;

@end
