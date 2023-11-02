
@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource> {
    PXLinkPresentationConfiguration * _configuration;
}

@property (nonatomic, readonly) PXLinkPresentationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linkMetadataForConfiguration:(id)arg1;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1;

@end
