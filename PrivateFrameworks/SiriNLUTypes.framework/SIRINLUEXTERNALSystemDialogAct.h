
@interface SIRINLUEXTERNALSystemDialogAct : PBCodable <NSCopying> {
    SIRINLUEXTERNALSystemGaveOptions * _gaveOptions;
    SIRINLUEXTERNALUUID * _idA;
    SIRINLUEXTERNALSystemInformed * _informed;
    SIRINLUEXTERNALSystemOffered * _offered;
    SIRINLUEXTERNALSystemPrompted * _prompted;
    SIRICOMMONStringValue * _renderedText;
    SIRINLUEXTERNALSystemReportedFailure * _reportedFailure;
    SIRINLUEXTERNALSystemReportedSuccess * _reportedSuccess;
}

@property (nonatomic, retain) SIRINLUEXTERNALSystemGaveOptions *gaveOptions;
@property (nonatomic, readonly) bool hasGaveOptions;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic, readonly) bool hasInformed;
@property (nonatomic, readonly) bool hasOffered;
@property (nonatomic, readonly) bool hasPrompted;
@property (nonatomic, readonly) bool hasRenderedText;
@property (nonatomic, readonly) bool hasReportedFailure;
@property (nonatomic, readonly) bool hasReportedSuccess;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *idA;
@property (nonatomic, retain) SIRINLUEXTERNALSystemInformed *informed;
@property (nonatomic, retain) SIRINLUEXTERNALSystemOffered *offered;
@property (nonatomic, retain) SIRINLUEXTERNALSystemPrompted *prompted;
@property (nonatomic, retain) SIRICOMMONStringValue *renderedText;
@property (nonatomic, retain) SIRINLUEXTERNALSystemReportedFailure *reportedFailure;
@property (nonatomic, retain) SIRINLUEXTERNALSystemReportedSuccess *reportedSuccess;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gaveOptions;
- (bool)hasGaveOptions;
- (bool)hasIdA;
- (bool)hasInformed;
- (bool)hasOffered;
- (bool)hasPrompted;
- (bool)hasRenderedText;
- (bool)hasReportedFailure;
- (bool)hasReportedSuccess;
- (unsigned long long)hash;
- (id)idA;
- (id)informed;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)offered;
- (id)prompted;
- (bool)readFrom:(id)arg1;
- (id)renderedText;
- (id)reportedFailure;
- (id)reportedSuccess;
- (void)setGaveOptions:(id)arg1;
- (void)setIdA:(id)arg1;
- (void)setInformed:(id)arg1;
- (void)setOffered:(id)arg1;
- (void)setPrompted:(id)arg1;
- (void)setRenderedText:(id)arg1;
- (void)setReportedFailure:(id)arg1;
- (void)setReportedSuccess:(id)arg1;
- (void)writeTo:(id)arg1;

@end
