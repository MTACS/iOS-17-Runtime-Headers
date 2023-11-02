
@protocol _EMDistantContentRepresentation <NSObject>

@required

- (void)invalidate;
- (NSProgress *)performUnsubscribeAction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)requestRepresentationForItemWithObjectID:(void *)arg1 options:(void *)arg2 delegate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: EMObjectID *, EMContentRequestOptions *, <EMContentItemRequestDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_EMDistantContentRepresentation> *, EMContentRepresentation *, NSError *, void*
- (NSProgress *)requestUpdatedRepresentationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMContentRepresentation *, NSError *, void*

@end
