
@interface BMTrialIdentifier : BMEventBase <BMStoreData> {
    NSString * _deployment;
    NSString * _task;
    NSString * _treatment;
    NSString * _trialNamespace;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *deployment;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *task;
@property (nonatomic, readonly) NSString *treatment;
@property (nonatomic, readonly) NSString *trialNamespace;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)deployment;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialNamespace:(id)arg1 task:(id)arg2 treatment:(id)arg3 deployment:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)task;
- (id)treatment;
- (id)trialNamespace;
- (void)writeTo:(id)arg1;

@end
