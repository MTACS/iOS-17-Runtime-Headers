
@interface ARPHomeControlCorrelationUtilities : NSObject {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;

- (void).cxx_destruct;
- (id)firstHomeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(bool)arg2;
- (id)homeKitAccessoriesWithPredicate:(id)arg1 sortStartDateAscending:(bool)arg2 limit:(long long)arg3;
- (id)homeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(bool)arg2;
- (id)homeKitScenesWithPredicate:(id)arg1 sortStartDateAscending:(bool)arg2 limit:(long long)arg3;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (bool)writeArchive:(id)arg1 toFilePath:(id)arg2;

@end
