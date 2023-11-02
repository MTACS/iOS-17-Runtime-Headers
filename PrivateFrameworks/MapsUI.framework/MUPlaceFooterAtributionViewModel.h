
@interface MUPlaceFooterAtributionViewModel : MUPlaceSectionFooterViewModel {
    NSString * _formatString;
    bool  _interactable;
    NSArray * _providerNames;
}

@property (nonatomic, readonly) NSString *formatString;
@property (getter=isInteractable, nonatomic, readonly) bool interactable;
@property (nonatomic, copy) NSArray *providerNames;

+ (id)_attributionViewModelForProviderName:(id)arg1 attributionURLs:(id)arg2;
+ (id)interactableVendorAttributionFormatString;
+ (id)nonInteractableVendorAttributionFormatString;
+ (id)transitAttributionFormatString;
+ (id)viewModelForGeoMapItemAttribution:(id)arg1;
+ (id)viewModelForMapItem:(id)arg1 transitLine:(id)arg2;
+ (id)viewModelForMapItemAttribution:(id)arg1;

- (void).cxx_destruct;
- (id)attributedText;
- (id)formatString;
- (id)initWithFormatString:(id)arg1 providerNames:(id)arg2 isInteractable:(bool)arg3;
- (bool)isInteractable;
- (id)providerNames;
- (void)setProviderNames:(id)arg1;

@end
