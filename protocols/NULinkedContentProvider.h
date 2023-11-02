
@protocol NULinkedContentProvider <NSObject>

@required

- (<FCOperationCanceling> *)loadLinkedContentForHeadline:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <FCHeadlineProviding> *, SXContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (<FCOperationCanceling> *)loadLinkedContentForHeadline:(void *)arg1 withContext:(void *)arg2 priority:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: <FCHeadlineProviding> *, SXContext *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
