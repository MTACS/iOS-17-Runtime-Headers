
@interface MessageContentRepresentationRequestDelegate : NSObject <EMContentItemRequestDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForMailDropContentItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForRelatedContentItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)contentObjectID:(id)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(id /* block */)arg2;

@end
