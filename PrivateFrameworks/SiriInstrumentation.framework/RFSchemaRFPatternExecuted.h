
@interface RFSchemaRFPatternExecuted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int pattern : 1; 
        unsigned int mode : 1; 
    }  _has;
    bool  _hasPatternId;
    bool  _hasResponseViewId;
    int  _mode;
    int  _pattern;
    NSString * _patternId;
    NSString * _responseViewId;
}

@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasPattern;
@property (nonatomic) bool hasPatternId;
@property (nonatomic) bool hasResponseViewId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mode;
@property (nonatomic) int pattern;
@property (nonatomic, copy) NSString *patternId;
@property (nonatomic, copy) NSString *responseViewId;

- (void).cxx_destruct;
- (void)deleteMode;
- (void)deletePattern;
- (void)deletePatternId;
- (void)deleteResponseViewId;
- (id)dictionaryRepresentation;
- (bool)hasMode;
- (bool)hasPattern;
- (bool)hasPatternId;
- (bool)hasResponseViewId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mode;
- (int)pattern;
- (id)patternId;
- (bool)readFrom:(id)arg1;
- (id)responseViewId;
- (void)setHasMode:(bool)arg1;
- (void)setHasPattern:(bool)arg1;
- (void)setHasPatternId:(bool)arg1;
- (void)setHasResponseViewId:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setPattern:(int)arg1;
- (void)setPatternId:(id)arg1;
- (void)setResponseViewId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
