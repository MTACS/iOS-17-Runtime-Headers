
@interface MLULookupItemDDContent : MLULookupItemContent {
    DDPreviewAction * _previewAction;
}

- (void).cxx_destruct;
- (unsigned long long)commitType;
- (id)commitURL;
- (id)contact;
- (void)dismissViewController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 documentProperties:(id)arg3;
- (void)setupViewControllerInCommitMode;

@end
