
@interface SwiftUI.DocumentBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    void configurationMap;
    void documentConfigurations;
    void rootModifier;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(id /* block */)arg2;
- (void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3;
- (id)initForOpeningContentTypes:(id)arg1;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
