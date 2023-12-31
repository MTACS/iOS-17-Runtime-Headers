
@interface FCHeadlineClusterOrderingPersonalized : NSObject <FCHeadlineClusterOrdering>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)orderTopicsWithClusteredHeadlines:(id)arg1 additionalHeadlines:(id)arg2 subscribedTagIDs:(id)arg3 scoresByArticleID:(id)arg4 personalizer:(id)arg5 tagNameProvider:(id /* block */)arg6 personalizationTreatment:(id)arg7 translationProvider:(id)arg8;

@end
