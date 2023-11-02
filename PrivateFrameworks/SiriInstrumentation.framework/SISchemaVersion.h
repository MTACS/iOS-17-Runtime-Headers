
@interface SISchemaVersion : SISchemaInstrumentationMessage {
    struct { 
        unsigned int major : 1; 
        unsigned int minor : 1; 
        unsigned int patch : 1; 
    }  _has;
    bool  _hasPrerelease;
    unsigned int  _major;
    unsigned int  _minor;
    unsigned int  _patch;
    NSString * _prerelease;
}

@property (nonatomic) bool hasMajor;
@property (nonatomic) bool hasMinor;
@property (nonatomic) bool hasPatch;
@property (nonatomic) bool hasPrerelease;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int major;
@property (nonatomic) unsigned int minor;
@property (nonatomic) unsigned int patch;
@property (nonatomic, copy) NSString *prerelease;

- (void).cxx_destruct;
- (void)deleteMajor;
- (void)deleteMinor;
- (void)deletePatch;
- (void)deletePrerelease;
- (id)dictionaryRepresentation;
- (bool)hasMajor;
- (bool)hasMinor;
- (bool)hasPatch;
- (bool)hasPrerelease;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)major;
- (unsigned int)minor;
- (unsigned int)patch;
- (id)prerelease;
- (bool)readFrom:(id)arg1;
- (void)setHasMajor:(bool)arg1;
- (void)setHasMinor:(bool)arg1;
- (void)setHasPatch:(bool)arg1;
- (void)setHasPrerelease:(bool)arg1;
- (void)setMajor:(unsigned int)arg1;
- (void)setMinor:(unsigned int)arg1;
- (void)setPatch:(unsigned int)arg1;
- (void)setPrerelease:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
