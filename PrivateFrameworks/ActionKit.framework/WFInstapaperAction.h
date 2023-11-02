
@interface WFInstapaperAction : WFAction <IKEngineDelegate, WFDynamicEnumerationDataSource> {
    IKEngine * _engine;
    bool  _hasFetchedFolders;
    NSMutableArray * _identifiers;
}

@property (nonatomic, readonly) NSArray *connectionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKEngine *engine;
@property (nonatomic) bool hasFetchedFolders;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *identifiers;
@property (nonatomic, readonly) bool includeSpecialFolders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)connectionTypes;
- (void)dealloc;
- (id)engine;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveFolders:(id)arg3;
- (void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
- (void)engine:(id)arg1 didFinishConnection:(id)arg2;
- (void)engine:(id)arg1 willStartConnection:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)folders;
- (bool)hasFetchedFolders;
- (id)identifiers;
- (bool)includeSpecialFolders;
- (void)initializeParameters;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;
- (void)setHasFetchedFolders:(bool)arg1;
- (void)updateFolders;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
