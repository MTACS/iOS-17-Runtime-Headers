
@interface INFERENCESchemaINFERENCESimpleTaskInfoGenerated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int taskSuccessType : 1; 
        unsigned int isSuccess : 1; 
        unsigned int isExecuted : 1; 
        unsigned int isSuccessfulDirectExecution : 1; 
    }  _has;
    bool  _hasOriginalResolutionContextId;
    bool  _hasTaskSpecificInfo;
    bool  _isExecuted;
    bool  _isSuccess;
    bool  _isSuccessfulDirectExecution;
    SISchemaUUID * _originalResolutionContextId;
    INFERENCESchemaINFERENCETaskSpecificInfo * _taskSpecificInfo;
    int  _taskSuccessType;
}

@property (nonatomic) bool hasIsExecuted;
@property (nonatomic) bool hasIsSuccess;
@property (nonatomic) bool hasIsSuccessfulDirectExecution;
@property (nonatomic) bool hasOriginalResolutionContextId;
@property (nonatomic) bool hasTaskSpecificInfo;
@property (nonatomic) bool hasTaskSuccessType;
@property (nonatomic) bool isExecuted;
@property (nonatomic) bool isSuccess;
@property (nonatomic) bool isSuccessfulDirectExecution;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalResolutionContextId;
@property (nonatomic, retain) INFERENCESchemaINFERENCETaskSpecificInfo *taskSpecificInfo;
@property (nonatomic) int taskSuccessType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsExecuted;
- (void)deleteIsSuccess;
- (void)deleteIsSuccessfulDirectExecution;
- (void)deleteOriginalResolutionContextId;
- (void)deleteTaskSpecificInfo;
- (void)deleteTaskSuccessType;
- (id)dictionaryRepresentation;
- (bool)hasIsExecuted;
- (bool)hasIsSuccess;
- (bool)hasIsSuccessfulDirectExecution;
- (bool)hasOriginalResolutionContextId;
- (bool)hasTaskSpecificInfo;
- (bool)hasTaskSuccessType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExecuted;
- (bool)isSuccess;
- (bool)isSuccessfulDirectExecution;
- (id)jsonData;
- (id)originalResolutionContextId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsExecuted:(bool)arg1;
- (void)setHasIsSuccess:(bool)arg1;
- (void)setHasIsSuccessfulDirectExecution:(bool)arg1;
- (void)setHasOriginalResolutionContextId:(bool)arg1;
- (void)setHasTaskSpecificInfo:(bool)arg1;
- (void)setHasTaskSuccessType:(bool)arg1;
- (void)setIsExecuted:(bool)arg1;
- (void)setIsSuccess:(bool)arg1;
- (void)setIsSuccessfulDirectExecution:(bool)arg1;
- (void)setOriginalResolutionContextId:(id)arg1;
- (void)setTaskSpecificInfo:(id)arg1;
- (void)setTaskSuccessType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskSpecificInfo;
- (int)taskSuccessType;
- (void)writeTo:(id)arg1;

@end
