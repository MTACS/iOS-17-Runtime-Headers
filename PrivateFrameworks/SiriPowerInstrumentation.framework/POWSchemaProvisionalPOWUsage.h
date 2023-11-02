
@interface POWSchemaProvisionalPOWUsage : SISchemaInstrumentationMessage {
    int  _context;
    struct { 
        unsigned int process : 1; 
        unsigned int context : 1; 
    }  _has;
    bool  _hasProcessUsage;
    int  _process;
    POWSchemaProvisionalPOWProcessUsage * _processUsage;
}

@property (nonatomic) int context;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasProcess;
@property (nonatomic) bool hasProcessUsage;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int process;
@property (nonatomic, retain) POWSchemaProvisionalPOWProcessUsage *processUsage;

- (void).cxx_destruct;
- (int)context;
- (void)deleteContext;
- (void)deleteProcess;
- (void)deleteProcessUsage;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasProcess;
- (bool)hasProcessUsage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)process;
- (id)processUsage;
- (bool)readFrom:(id)arg1;
- (void)setContext:(int)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasProcess:(bool)arg1;
- (void)setHasProcessUsage:(bool)arg1;
- (void)setProcess:(int)arg1;
- (void)setProcessUsage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
