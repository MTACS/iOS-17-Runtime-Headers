
@interface _SFActivityItemCustomizationController : NSObject <UIActivityViewControllerObjectManipulationDelegate> {
    bool  _contentTypeAllowedMap;
    <_SFActivityItemCustomizationDelegate> * _delegate;
    long long  _selectedContentType;
}

@property (nonatomic, readonly) bool canPrint;
@property (nonatomic, readonly) bool canShareAsDownload;
@property (nonatomic, readonly) bool canShareAsLink;
@property (nonatomic, readonly) bool canShareAsPDF;
@property (nonatomic, readonly) bool canShareAsStandaloneImage;
@property (nonatomic, readonly) bool canShareAsWebArchive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFActivityItemCustomizationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long selectedContentType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allowedContentTypes;
- (long long)_contentTypeForAllowedContentAtIndex:(long long)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)_customizationsDidChange;
- (void)_ensureSelectedContentTypeIsAllowed;
- (long long)_selectedIndex;
- (bool)canPrint;
- (bool)canShareAsDownload;
- (bool)canShareAsLink;
- (bool)canShareAsPDF;
- (bool)canShareAsStandaloneImage;
- (bool)canShareAsWebArchive;
- (id)delegate;
- (id)init;
- (long long)selectedContentType;
- (void)setDelegate:(id)arg1;

@end
