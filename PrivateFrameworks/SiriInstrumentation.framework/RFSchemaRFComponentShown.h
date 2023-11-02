
@interface RFSchemaRFComponentShown : SISchemaInstrumentationMessage {
    int  _component;
    NSString * _componentIndex;
    NSString * _componentName;
    struct { 
        unsigned int component : 1; 
    }  _has;
    bool  _hasComponentIndex;
    bool  _hasComponentName;
}

@property (nonatomic) int component;
@property (nonatomic, copy) NSString *componentIndex;
@property (nonatomic, copy) NSString *componentName;
@property (nonatomic) bool hasComponent;
@property (nonatomic) bool hasComponentIndex;
@property (nonatomic) bool hasComponentName;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)component;
- (id)componentIndex;
- (id)componentName;
- (void)deleteComponent;
- (void)deleteComponentIndex;
- (void)deleteComponentName;
- (id)dictionaryRepresentation;
- (bool)hasComponent;
- (bool)hasComponentIndex;
- (bool)hasComponentName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setComponent:(int)arg1;
- (void)setComponentIndex:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setHasComponent:(bool)arg1;
- (void)setHasComponentIndex:(bool)arg1;
- (void)setHasComponentName:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
