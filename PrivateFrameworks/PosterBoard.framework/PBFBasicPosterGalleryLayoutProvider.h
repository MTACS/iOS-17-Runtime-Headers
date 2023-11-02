
@interface PBFBasicPosterGalleryLayoutProvider : NSObject <PBFPosterGalleryLayoutProviding> {
    PBFPosterGalleryLayout * _galleryLayout;
    NSLocale * _locale;
    NSDictionary * _posterDescriptorsByExtensionBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PBFPosterGalleryLayout *galleryLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, copy) NSDictionary *posterDescriptorsByExtensionBundleIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchGalleryLayoutWithCompletion:(id /* block */)arg1;
- (id)galleryLayout;
- (void)handlePosterDescriptorsDidChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)locale;
- (id)posterDescriptorsByExtensionBundleIdentifier;
- (void)setGalleryLayout:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setPosterDescriptorsByExtensionBundleIdentifier:(id)arg1;
- (bool)wantsFetchGalleryLayoutAfterHandlePosterDescriptorsDidChange;

@end
