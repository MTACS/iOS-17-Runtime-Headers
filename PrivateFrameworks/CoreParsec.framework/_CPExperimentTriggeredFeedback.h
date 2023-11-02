
@interface _CPExperimentTriggeredFeedback : PBCodable <NSSecureCoding, _CPExperimentTriggeredFeedback, _CPProcessableFeedback> {
    NSString * _codepathId;
    _CPCounterfactualInfo * _counterfactual;
    unsigned long long  _queryID;
    unsigned long long  _timestamp;
}

@property (nonatomic, copy) NSString *codepathId;
@property (nonatomic, retain) _CPCounterfactualInfo *counterfactual;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long queryID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)codepathId;
- (id)counterfactual;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)queryID;
- (bool)readFrom:(id)arg1;
- (void)setCodepathId:(id)arg1;
- (void)setCounterfactual:(id)arg1;
- (void)setQueryID:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
