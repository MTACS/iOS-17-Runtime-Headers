
@interface MPMediaKitContentReporter : NSObject {
    NSOperationQueue * _operationQueue;
    NSDictionary * _reportConcernBagDictionary;
    NSString * contentReportKindStringForType;
    NSString * contentReportTypeStringForType;
    NSOperation * contentReporterURLOperation;
}

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)_dictionariesForType:(long long)arg1;
- (void)_performWithBag:(id /* block */)arg1;
- (id)_reportConcernBagDictionary;
- (id)contentReportKindStringForType:(long long)arg1;
- (id)contentReportTypeStringForType:(long long)arg1;
- (id)contentReporterURLOperation:(id)arg1 dictionary:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)reportsForType:(long long)arg1 contentID:(id)arg2 commentText:(id)arg3 concernParentItemID:(id)arg4 concernParentItemType:(id)arg5;
- (void)submitReport:(id)arg1 completion:(id /* block */)arg2;
- (id)urlLoadRequestWithRequest:(id)arg1 requestContext:(id)arg2;

@end
