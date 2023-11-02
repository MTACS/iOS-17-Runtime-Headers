
@interface POMMESSchemaPOMMESFunctionPerformanceProfile : SISchemaInstrumentationMessage {
    NSString * _callingFunction;
    double  _durationInMs;
    NSString * _fileId;
    struct { 
        unsigned int startTimeIntervalSince2001InMs : 1; 
        unsigned int durationInMs : 1; 
        unsigned int lineNumber : 1; 
    }  _has;
    bool  _hasCallingFunction;
    bool  _hasFileId;
    bool  _hasMeasurementLabel;
    int  _lineNumber;
    NSString * _measurementLabel;
    double  _startTimeIntervalSince2001InMs;
}

@property (nonatomic, copy) NSString *callingFunction;
@property (nonatomic) double durationInMs;
@property (nonatomic, copy) NSString *fileId;
@property (nonatomic) bool hasCallingFunction;
@property (nonatomic) bool hasDurationInMs;
@property (nonatomic) bool hasFileId;
@property (nonatomic) bool hasLineNumber;
@property (nonatomic) bool hasMeasurementLabel;
@property (nonatomic) bool hasStartTimeIntervalSince2001InMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int lineNumber;
@property (nonatomic, copy) NSString *measurementLabel;
@property (nonatomic) double startTimeIntervalSince2001InMs;

- (void).cxx_destruct;
- (id)callingFunction;
- (void)deleteCallingFunction;
- (void)deleteDurationInMs;
- (void)deleteFileId;
- (void)deleteLineNumber;
- (void)deleteMeasurementLabel;
- (void)deleteStartTimeIntervalSince2001InMs;
- (id)dictionaryRepresentation;
- (double)durationInMs;
- (id)fileId;
- (bool)hasCallingFunction;
- (bool)hasDurationInMs;
- (bool)hasFileId;
- (bool)hasLineNumber;
- (bool)hasMeasurementLabel;
- (bool)hasStartTimeIntervalSince2001InMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)lineNumber;
- (id)measurementLabel;
- (bool)readFrom:(id)arg1;
- (void)setCallingFunction:(id)arg1;
- (void)setDurationInMs:(double)arg1;
- (void)setFileId:(id)arg1;
- (void)setHasCallingFunction:(bool)arg1;
- (void)setHasDurationInMs:(bool)arg1;
- (void)setHasFileId:(bool)arg1;
- (void)setHasLineNumber:(bool)arg1;
- (void)setHasMeasurementLabel:(bool)arg1;
- (void)setHasStartTimeIntervalSince2001InMs:(bool)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setMeasurementLabel:(id)arg1;
- (void)setStartTimeIntervalSince2001InMs:(double)arg1;
- (double)startTimeIntervalSince2001InMs;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
