
@interface _SFCalendarEventDetector : NSObject {
    id /* block */  _checkForCalendarEventsBlock;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)_containsCalendarEventForPageWithSchemaOrgMarkup:(bool)arg1;
- (void)_foundCalendarEvents:(id)arg1;
- (void)_service:(id)arg1 didFindEventCandidateForURL:(id)arg2 pageTitle:(id)arg3;
- (void)cancelCheckForConfirmationPage;
- (void)containsCalendarEventForPageWithSchemaOrgMarkup:(bool)arg1;
- (id)initWithWebView:(id)arg1;

@end
