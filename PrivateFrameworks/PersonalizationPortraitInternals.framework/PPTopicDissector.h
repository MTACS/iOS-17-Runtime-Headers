
@interface PPTopicDissector : NSObject {
    CKContextClient * _contextClient;
    PPTextToTopicTransform * _transform;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_collectHighLevelTopicsWithText:(id)arg1 bundleId:(id)arg2 addTopic:(id /* block */)arg3 weight:(double)arg4;
- (void)_collectResultsFromContextKitWithText:(id)arg1 isPlainText:(bool)arg2 bundleId:(id)arg3 language:(id)arg4 useContextKitTopics:(bool)arg5 useContextKitNamedEntities:(bool)arg6 addTopic:(id /* block */)arg7 addNamedEntity:(id /* block */)arg8 weight:(double)arg9;
- (id)extractionsFromContextKitWithText:(id)arg1 isPlainText:(bool)arg2 bundleId:(id)arg3 language:(id)arg4 weight:(double)arg5;
- (id)init;
- (id)initWithContextClient:(id)arg1;
- (id)topicsInText:(id)arg1 isPlainText:(bool)arg2 source:(id)arg3 cloudSync:(bool)arg4 language:(id)arg5 topicAlgorithms:(id)arg6 namedEntityAlgorithms:(id)arg7 weight:(double)arg8;

@end
