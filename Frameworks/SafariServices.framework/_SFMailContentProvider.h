
@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate> {
    <_SFMailContentProviderDataSource> * _dataSource;
    bool  _restrictAddingPDFContent;
}

@property (nonatomic) <_SFMailContentProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool restrictAddingPDFContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_bestContentTypeForPreferredContentType:(long long)arg1;
- (bool)_canProvideContentType:(long long)arg1;
- (long long)_defaultPreferredContentType;
- (void)_getPDFDataWithCompletionHandler:(id /* block */)arg1;
- (void)_getReaderContentWithCompletionHandler:(id /* block */)arg1;
- (void)_getWebArchiveDataWithCompletion:(id /* block */)arg1;
- (id)_preferentiallyOrderedAvailableContentTypes;
- (id)_preferentiallyOrderedContentTypes;
- (id)dataSource;
- (void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(id /* block */)arg5;
- (bool)restrictAddingPDFContent;
- (void)setDataSource:(id)arg1;
- (void)setRestrictAddingPDFContent:(bool)arg1;

@end
