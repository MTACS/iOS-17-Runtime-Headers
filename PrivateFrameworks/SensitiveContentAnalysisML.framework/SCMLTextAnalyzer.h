
@interface SCMLTextAnalyzer : SCMLModelBase {
    NSArray * _models;
}

- (void).cxx_destruct;
- (id)_classificationForTextItems:(id)arg1 conversationIdentifier:(id)arg2;
- (id)_classificationsForTextItems:(id)arg1 previousClassifications:(id)arg2;
- (long long)_classifyString:(id)arg1;
- (long long)classifyString:(id)arg1;
- (id)initWithModelURL:(id)arg1 options:(id)arg2;
- (void)processConversationsWithStartDate:(id)arg1 endDate:(id)arg2 previousClassifications:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)processText:(id)arg1 inConversationWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5;

@end
