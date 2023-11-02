
@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int testType : 1; 
    }  _has;
    bool  _hasTestName;
    bool  _hasTestSessionInfo;
    NSString * _testName;
    SUTSchemaTestSessionInfo * _testSessionInfo;
    int  _testType;
}

@property (nonatomic) bool hasTestName;
@property (nonatomic) bool hasTestSessionInfo;
@property (nonatomic) bool hasTestType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic, retain) SUTSchemaTestSessionInfo *testSessionInfo;
@property (nonatomic) int testType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTestName;
- (void)deleteTestSessionInfo;
- (void)deleteTestType;
- (id)dictionaryRepresentation;
- (bool)hasTestName;
- (bool)hasTestSessionInfo;
- (bool)hasTestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTestName:(bool)arg1;
- (void)setHasTestSessionInfo:(bool)arg1;
- (void)setHasTestType:(bool)arg1;
- (void)setTestName:(id)arg1;
- (void)setTestSessionInfo:(id)arg1;
- (void)setTestType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (id)testName;
- (id)testSessionInfo;
- (int)testType;
- (void)writeTo:(id)arg1;

@end
