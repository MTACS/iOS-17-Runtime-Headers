
@interface POWSchemaProvisionalPOWProcessUsage : SISchemaInstrumentationMessage {
    unsigned long long  _cpuCycles;
    unsigned long long  _cpuInstructions;
    unsigned long long  _gpuCycles;
    struct { 
        unsigned int cpuCycles : 1; 
        unsigned int cpuInstructions : 1; 
        unsigned int gpuCycles : 1; 
        unsigned int memoryFootprint : 1; 
    }  _has;
    unsigned long long  _memoryFootprint;
}

@property (nonatomic) unsigned long long cpuCycles;
@property (nonatomic) unsigned long long cpuInstructions;
@property (nonatomic) unsigned long long gpuCycles;
@property (nonatomic) bool hasCpuCycles;
@property (nonatomic) bool hasCpuInstructions;
@property (nonatomic) bool hasGpuCycles;
@property (nonatomic) bool hasMemoryFootprint;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long memoryFootprint;

- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (void)deleteCpuCycles;
- (void)deleteCpuInstructions;
- (void)deleteGpuCycles;
- (void)deleteMemoryFootprint;
- (id)dictionaryRepresentation;
- (unsigned long long)gpuCycles;
- (bool)hasCpuCycles;
- (bool)hasCpuInstructions;
- (bool)hasGpuCycles;
- (bool)hasMemoryFootprint;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)memoryFootprint;
- (bool)readFrom:(id)arg1;
- (void)setCpuCycles:(unsigned long long)arg1;
- (void)setCpuInstructions:(unsigned long long)arg1;
- (void)setGpuCycles:(unsigned long long)arg1;
- (void)setHasCpuCycles:(bool)arg1;
- (void)setHasCpuInstructions:(bool)arg1;
- (void)setHasGpuCycles:(bool)arg1;
- (void)setHasMemoryFootprint:(bool)arg1;
- (void)setMemoryFootprint:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
