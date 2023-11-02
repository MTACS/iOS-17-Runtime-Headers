
@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource> {
    unsigned short  _namespaceType;
    PGTrialSession * _trialSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short namespaceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) PGTrialSession *trialSession;

- (void).cxx_destruct;
- (id)initWithTrialSession:(id)arg1 namespaceType:(unsigned short)arg2;
- (unsigned short)namespaceType;
- (id)objectForKey:(id)arg1;
- (void)setNamespaceType:(unsigned short)arg1;
- (void)setTrialSession:(id)arg1;
- (id)trialSession;

@end
