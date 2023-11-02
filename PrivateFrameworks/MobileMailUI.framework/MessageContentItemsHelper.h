
@interface MessageContentItemsHelper : NSObject <EFLoggable> {
    bool  _allMailDropsDownloaded;
    <EFScheduler> * _attachmentsScheduler;
    NSMutableDictionary * _contentIDToTask;
    NSArray * _contentItems;
    bool  _didComputeMailDropProperties;
    NSMutableDictionary * _elementIDToContentID;
    NSMutableDictionary * _elementIDToWKAttachmentID;
    NSMutableSet * _inlinedImageContentIDs;
    EMMailDropMetadata * _mailDropBannerMetadata;
    id /* block */  _maildropProgressHandler;
    <ContentRepresentationHandlingDelegate> * _representationHandler;
    unsigned long long  _totalMailDropDownloadSize;
    NSProgress * _totalMailDropProgress;
    long long  _totalUnstartedMailDropDownloadSize;
    <MSMailWebProcessAttachmentProxy> * _webProcessProxy;
    WKWebView * _webView;
}

@property (nonatomic) bool allMailDropsDownloaded;
@property (nonatomic, retain) NSArray *contentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailDropMetadata *mailDropBannerMetadata;
@property (nonatomic, copy) id /* block */ maildropProgressHandler;
@property (nonatomic) <ContentRepresentationHandlingDelegate> *representationHandler;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalMailDropDownloadSize;
@property (nonatomic, retain) WKWebView *webView;

+ (id)log;

- (void).cxx_destruct;
- (void)_computeMailDropProperties;
- (id)_futureForContentItem:(id)arg1 networkUsage:(long long)arg2 invokerID:(id)arg3 previouslyInvoked:(bool*)arg4 progress:(id*)arg5;
- (void)_injectAttachmentViewForElementWithSourceAttributeValue:(id)arg1 forContentItem:(id)arg2;
- (id)_representationTypeForContentItem:(id)arg1;
- (void)_updateProgressFraction:(id)arg1 forContentItem:(id)arg2;
- (bool)allMailDropsDownloaded;
- (void)associateElementID:(id)arg1 withContentID:(id)arg2;
- (void)associateElementID:(id)arg1 withWKAttachmentID:(id)arg2;
- (void)attachmentWasTappedWithElementID:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 view:(id)arg3;
- (id)contentItemForContentID:(id)arg1;
- (id)contentItemForElementID:(id)arg1;
- (id)contentItems;
- (id)debugDescription;
- (long long)displayStateForContentItem:(id)arg1;
- (void)displayViewerForContentItem:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 view:(id)arg3;
- (void)downloadAllMailDropAttachments;
- (id)futureForContentItem:(id)arg1 download:(bool)arg2;
- (id)initWithWebView:(id)arg1 contentItemHandler:(id)arg2;
- (void)inlineImageFinishedDownloading:(id)arg1;
- (id)mailDropBannerMetadata;
- (id /* block */)maildropProgressHandler;
- (void)noteDidFailLoadingResourceWithURL:(id)arg1;
- (void)noteDidFinishDocumentLoadForURL:(id)arg1;
- (id)representationHandler;
- (void)saveContentItem:(id)arg1 toDestination:(long long)arg2;
- (void)setAllMailDropsDownloaded:(bool)arg1;
- (void)setContentItems:(id)arg1;
- (void)setDisplayState:(long long)arg1 forContentItem:(id)arg2;
- (void)setMaildropProgressHandler:(id /* block */)arg1;
- (void)setPercentCompleted:(double)arg1 forContentItem:(id)arg2;
- (void)setRepresentationHandler:(id)arg1;
- (void)setTotalMailDropDownloadSize:(unsigned long long)arg1;
- (void)setWebView:(id)arg1;
- (void)showMenuForContentItem:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 view:(id)arg3;
- (id)startDownloadForContentItem:(id)arg1 userInitiated:(bool)arg2;
- (unsigned long long)totalMailDropDownloadSize;
- (void)updateDragItemProvider:(id)arg1 forElementID:(id)arg2;
- (id)webView;

@end
