
@interface PPLocalSocialHighlightStore : NSObject <HVMessagesConsumer, HVSafariConsumer> {
    PPSocialHighlightStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)attributionForIdentifier:(id)arg1 error:(id*)arg2;
- (id)consumeMessagesContentWithContext:(id)arg1;
- (id)consumeSafariContentWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (bool)feedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 error:(id*)arg5;
- (bool)feedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (id)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 applicationIdentifiers:(id)arg4 error:(id*)arg5;
- (id)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 applicationIdentifiers:(id)arg4 error:(id*)arg5;

@end
