
@interface SUTSchemaTestExecutionEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    bool  _hasMetadata;
    bool  _hasTestAssociatedSchemaIdentifier;
    bool  _hasTestExecutionBegin;
    bool  _hasTestExecutionEnd;
    bool  _hasTestOutcomeRecorded;
    SUTSchemaTestExecutionMetadata * _metadata;
    SUTSchemaTestAssociatedSchemaIdentifier * _testAssociatedSchemaIdentifier;
    SUTSchemaTestExecutionBegin * _testExecutionBegin;
    SUTSchemaTestExecutionEnd * _testExecutionEnd;
    SUTSchemaTestOutcomeRecorded * _testOutcomeRecorded;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasMetadata;
@property (nonatomic) bool hasTestAssociatedSchemaIdentifier;
@property (nonatomic) bool hasTestExecutionBegin;
@property (nonatomic) bool hasTestExecutionEnd;
@property (nonatomic) bool hasTestOutcomeRecorded;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SUTSchemaTestExecutionMetadata *metadata;
@property (nonatomic, retain) SUTSchemaTestAssociatedSchemaIdentifier *testAssociatedSchemaIdentifier;
@property (nonatomic, retain) SUTSchemaTestExecutionBegin *testExecutionBegin;
@property (nonatomic, retain) SUTSchemaTestExecutionEnd *testExecutionEnd;
@property (nonatomic, retain) SUTSchemaTestOutcomeRecorded *testOutcomeRecorded;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteMetadata;
- (void)deleteTestAssociatedSchemaIdentifier;
- (void)deleteTestExecutionBegin;
- (void)deleteTestExecutionEnd;
- (void)deleteTestOutcomeRecorded;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasMetadata;
- (bool)hasTestAssociatedSchemaIdentifier;
- (bool)hasTestExecutionBegin;
- (bool)hasTestExecutionEnd;
- (bool)hasTestOutcomeRecorded;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasTestAssociatedSchemaIdentifier:(bool)arg1;
- (void)setHasTestExecutionBegin:(bool)arg1;
- (void)setHasTestExecutionEnd:(bool)arg1;
- (void)setHasTestOutcomeRecorded:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTestAssociatedSchemaIdentifier:(id)arg1;
- (void)setTestExecutionBegin:(id)arg1;
- (void)setTestExecutionEnd:(id)arg1;
- (void)setTestOutcomeRecorded:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)testAssociatedSchemaIdentifier;
- (id)testExecutionBegin;
- (id)testExecutionEnd;
- (id)testOutcomeRecorded;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
