
@interface PhotosUICore.PhotosDetailsSharedWithYouWidgetViewModel : PhotosUICore.PhotosDetailsWidgetViewModel <PXContentSyndicationAttributionInfoChangeDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasSyndicationAttributionInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _syndicationAttributionInfoIsLoading;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _syndicationContactImage;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _syndicationContactName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _syndicationSharedInAttributedTitle;
    void appAttributionModel;
    void attributionIdentifier;
    void attributionInfo;
    void axDescriptionForContactImage;
    void axDescriptionForLoadingIndicator;
    void axDescriptionForReplyButton;
    void axDescriptionForTextLabels;
    void senderAppName;
    void viewControllerForPresenting;
}

- (void).cxx_destruct;
- (void)syndicationAttributionInfoDidChange:(id)arg1;

@end
