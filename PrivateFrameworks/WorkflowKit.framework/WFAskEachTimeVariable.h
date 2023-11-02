
@interface WFAskEachTimeVariable : WFVariable {
    WFDisambiguationCollectionFilter * _collectionFilter;
}

@property (nonatomic, retain) WFDisambiguationCollectionFilter *collectionFilter;
@property (nonatomic, readonly) NSString *prompt;

- (void).cxx_destruct;
- (id)collectionFilter;
- (id)icon;
- (id)init;
- (id)initWithCollectionFilter:(id)arg1;
- (id)initWithPrompt:(id)arg1;
- (id)initWithPrompt:(id)arg1 collectionFilter:(id)arg2;
- (bool)isAvailable;
- (id)name;
- (id)prompt;
- (bool)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCollectionFilter:(id)arg1;
- (bool)supportsAggrandizements;

@end
