
@protocol EMContentItemRequestDelegate <NSObject>

@required

- (void)contentObjectID:(void *)arg1 generateHTMLSnippetsForMailDropContentItems:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: EMObjectID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)contentObjectID:(void *)arg1 generateHTMLSnippetsForRelatedContentItems:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: EMObjectID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)contentObjectID:(void *)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: EMObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
