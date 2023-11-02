
@interface RFSchemaRFInteractionPerformed : SISchemaInstrumentationMessage {
    NSString * _actionName;
    int  _commandType;
    NSString * _componentIndex;
    NSString * _componentName;
    struct { 
        unsigned int userInteraction : 1; 
        unsigned int visualComponent : 1; 
        unsigned int commandType : 1; 
    }  _has;
    bool  _hasActionName;
    bool  _hasComponentIndex;
    bool  _hasComponentName;
    int  _userInteraction;
    int  _visualComponent;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic) int commandType;
@property (nonatomic, copy) NSString *componentIndex;
@property (nonatomic, copy) NSString *componentName;
@property (nonatomic) bool hasActionName;
@property (nonatomic) bool hasCommandType;
@property (nonatomic) bool hasComponentIndex;
@property (nonatomic) bool hasComponentName;
@property (nonatomic) bool hasUserInteraction;
@property (nonatomic) bool hasVisualComponent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int userInteraction;
@property (nonatomic) int visualComponent;

- (void).cxx_destruct;
- (id)actionName;
- (int)commandType;
- (id)componentIndex;
- (id)componentName;
- (void)deleteActionName;
- (void)deleteCommandType;
- (void)deleteComponentIndex;
- (void)deleteComponentName;
- (void)deleteUserInteraction;
- (void)deleteVisualComponent;
- (id)dictionaryRepresentation;
- (bool)hasActionName;
- (bool)hasCommandType;
- (bool)hasComponentIndex;
- (bool)hasComponentName;
- (bool)hasUserInteraction;
- (bool)hasVisualComponent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setCommandType:(int)arg1;
- (void)setComponentIndex:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setHasActionName:(bool)arg1;
- (void)setHasCommandType:(bool)arg1;
- (void)setHasComponentIndex:(bool)arg1;
- (void)setHasComponentName:(bool)arg1;
- (void)setHasUserInteraction:(bool)arg1;
- (void)setHasVisualComponent:(bool)arg1;
- (void)setUserInteraction:(int)arg1;
- (void)setVisualComponent:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userInteraction;
- (int)visualComponent;
- (void)writeTo:(id)arg1;

@end
