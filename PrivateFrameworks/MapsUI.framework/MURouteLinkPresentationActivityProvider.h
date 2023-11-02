
@interface MURouteLinkPresentationActivityProvider : MURouteActivityProvider <UIActivityItemLinkPresentationSource> {
    LPLinkMetadata * _cachedMetadata;
    GEOComposedRoute * _composedRoute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3;
- (id)mapMetadataSpecialization;

@end
