
@interface _SFWebArchiveActivityItemProvider : _SFActivityItemProvider {
    LPFileMetadata * _linkPreviewFileMetadata;
    _SFWebArchiveProvider * _webArchiveProvider;
}

- (void).cxx_destruct;
- (id)_webArchiveItemProvider;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithWebArchiveProvider:(id)arg1;
- (id)item;

@end
