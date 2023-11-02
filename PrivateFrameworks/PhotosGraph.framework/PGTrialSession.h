
@interface PGTrialSession : NSObject {
    TRIClient * _trialClient;
}

@property (nonatomic, retain) TRIClient *trialClient;

+ (id)newTrialSession;

- (void).cxx_destruct;
- (id)arrayForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2;
- (id)dictionaryForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2;
- (id)init;
- (id)levelForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2;
- (id)namespaceNameForNamespaceType:(unsigned short)arg1;
- (void)setTrialClient:(id)arg1;
- (id)trialClient;

@end
