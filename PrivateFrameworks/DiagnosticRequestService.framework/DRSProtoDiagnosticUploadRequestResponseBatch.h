
@interface DRSProtoDiagnosticUploadRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    NSMutableArray * _decisionResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *decisionResults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)decisionResultsType;

- (void).cxx_destruct;
- (void)addDecisionResults:(id)arg1;
- (void)clearDecisionResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decisionResults;
- (id)decisionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)decisionResultsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDecisionResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
