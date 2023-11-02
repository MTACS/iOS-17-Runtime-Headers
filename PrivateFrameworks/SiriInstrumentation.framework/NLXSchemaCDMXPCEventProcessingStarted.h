
@interface NLXSchemaCDMXPCEventProcessingStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int processingType : 1; 
        unsigned int xpcType : 1; 
        unsigned int xpcSystemEventType : 1; 
        unsigned int serviceName : 1; 
    }  _has;
    int  _processingType;
    int  _serviceName;
    int  _xpcSystemEventType;
    int  _xpcType;
}

@property (nonatomic) bool hasProcessingType;
@property (nonatomic) bool hasServiceName;
@property (nonatomic) bool hasXpcSystemEventType;
@property (nonatomic) bool hasXpcType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int processingType;
@property (nonatomic) int serviceName;
@property (nonatomic) int xpcSystemEventType;
@property (nonatomic) int xpcType;

- (void)deleteProcessingType;
- (void)deleteServiceName;
- (void)deleteXpcSystemEventType;
- (void)deleteXpcType;
- (id)dictionaryRepresentation;
- (bool)hasProcessingType;
- (bool)hasServiceName;
- (bool)hasXpcSystemEventType;
- (bool)hasXpcType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)processingType;
- (bool)readFrom:(id)arg1;
- (int)serviceName;
- (void)setHasProcessingType:(bool)arg1;
- (void)setHasServiceName:(bool)arg1;
- (void)setHasXpcSystemEventType:(bool)arg1;
- (void)setHasXpcType:(bool)arg1;
- (void)setProcessingType:(int)arg1;
- (void)setServiceName:(int)arg1;
- (void)setXpcSystemEventType:(int)arg1;
- (void)setXpcType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;
- (int)xpcSystemEventType;
- (int)xpcType;

@end
