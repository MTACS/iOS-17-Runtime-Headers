
@interface PBFGalleryConfiguration : NSObject {
    <PBFComplicationSnapshotProviding> * _complicationSnapshotProvider;
    NSDictionary * _dynamicDescriptorsByExtensionIdentifier;
    <PRPosterExtensionProvider> * _extensionProvider;
    NSDictionary * _extensionsByIdentifier;
    NSMutableDictionary * _posterDescriptorLookupInfoForItemIdentifier;
    NSDictionary * _previewIdentifierToPreview;
    NSOrderedSet * _previews;
    NSDictionary * _sectionIdentifierToItems;
    NSDictionary * _sectionIdentifierToSectionMap;
    NSOrderedSet * _sectionIdentifiers;
    <PBFPosterSnapshotProviding> * _snapshotProvider;
    NSDictionary * _staticDescriptorsByExtensionIdentifier;
    ATXFaceGalleryConfiguration * _suggestedLayout;
}

@property (nonatomic, retain) <PBFComplicationSnapshotProviding> *complicationSnapshotProvider;
@property (nonatomic, readonly) NSDictionary *dynamicDescriptorsByExtensionIdentifier;
@property (nonatomic) <PRPosterExtensionProvider> *extensionProvider;
@property (nonatomic, readonly) NSDictionary *extensionsByIdentifier;
@property (nonatomic, readonly) NSSet *posterPreviews;
@property (nonatomic, readonly, copy) NSOrderedSet *sectionIdentifiers;
@property (nonatomic, retain) <PBFPosterSnapshotProviding> *snapshotProvider;
@property (nonatomic, readonly) NSDictionary *staticDescriptorsByExtensionIdentifier;
@property (nonatomic, readonly) ATXFaceGalleryConfiguration *suggestedLayout;

- (void).cxx_destruct;
- (void)_hydrateSectionIdentifiersIfNeeded;
- (id)_posterDescriptorLookupInfoForItem:(id)arg1;
- (id)_posterDescriptorLookupInfoForPreviewItem:(id)arg1;
- (id)complicationSnapshotProvider;
- (id)complicationSnapshotRequests;
- (void)dealloc;
- (id)dynamicDescriptorsByExtensionIdentifier;
- (void)enumeratePreviews:(id /* block */)arg1;
- (id)extensionProvider;
- (id)extensionsByIdentifier;
- (void)fetchComplicationsForPreview:(id)arg1 completion:(id /* block */)arg2;
- (id)gallerySnapshotRequestsForDisplayContexts:(id)arg1;
- (id)init;
- (id)initWithSuggestedLayout:(id)arg1 dynamicDescriptorsByExtensionIdentifier:(id)arg2 staticDescriptorsByExtensionIdentifier:(id)arg3 extensionsByIdentifier:(id)arg4;
- (id)itemsForSectionWithIdentifier:(id)arg1;
- (id)posterPreviewForUniqueIdentifier:(id)arg1;
- (id)posterPreviews;
- (id)posterSnapshotRequestsForContext:(id)arg1;
- (id)posterSnapshotRequestsForExtensionBundleIdentifier:(id)arg1 context:(id)arg2;
- (id)posterSnapshotRequestsForPreview:(id)arg1 context:(id)arg2;
- (id)previewForItem:(id)arg1 section:(id)arg2;
- (id)prewarmGallerySnapshotRequestsForDisplayContext:(id)arg1;
- (void)prewarmGallerySnapshotsWithCompletion:(id /* block */)arg1;
- (id)sectionForSectionIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (void)setComplicationSnapshotProvider:(id)arg1;
- (void)setExtensionProvider:(id)arg1;
- (void)setSnapshotProvider:(id)arg1;
- (id)snapshotProvider;
- (id)snapshotURLsForContext:(id)arg1;
- (id)snapshotURLsForPathIdentityForContext:(id)arg1;
- (id)staticDescriptorsByExtensionIdentifier;
- (id)suggestedLayout;

@end
