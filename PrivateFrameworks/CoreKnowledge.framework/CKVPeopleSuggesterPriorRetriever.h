
@interface CKVPeopleSuggesterPriorRetriever : NSObject <CKVPriorRetriever> {
    _PSContactSuggester * _contactSuggester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_convertPeopleSuggesterPriorToPriorInfo:(id)arg1;
- (id)_fetchContactPriorsForContactIds:(id)arg1;
- (id)allPriorInfoWithThreshold:(unsigned int)arg1;
- (id)init;
- (id)priorInfoForItemIds:(id)arg1;

@end
