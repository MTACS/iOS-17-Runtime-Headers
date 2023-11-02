
@interface DDLookupAction : DDParsecPreviewAction {
    RVQuery * _query;
    NSString * _queryString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _queryStringRange;
    id /* block */  _reportAnIssueBlock;
    id /* block */  _reportAnIssueMetadataFetchingBlock;
}

- (void).cxx_destruct;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (id)createViewController;
- (id)iconName;
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 context:(id)arg3;
- (id)initWithRVQuery:(id)arg1 context:(id)arg2;
- (id)initWithRVQuery:(id)arg1 reportAnIssueBlock:(id /* block */)arg2 context:(id)arg3;
- (id)initWithRVQuery:(id)arg1 reportAnIssueBlock:(id /* block */)arg2 metadataFetchingBlock:(id /* block */)arg3 context:(id)arg4;
- (id)menuActions;

@end
