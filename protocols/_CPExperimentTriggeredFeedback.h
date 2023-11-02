
@protocol _CPExperimentTriggeredFeedback <NSObject>

@required

- (NSString *)codepathId;
- (_CPCounterfactualInfo *)counterfactual;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)queryID;
- (void)setCodepathId:(NSString *)arg1;
- (void)setCounterfactual:(_CPCounterfactualInfo *)arg1;
- (void)setQueryID:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
