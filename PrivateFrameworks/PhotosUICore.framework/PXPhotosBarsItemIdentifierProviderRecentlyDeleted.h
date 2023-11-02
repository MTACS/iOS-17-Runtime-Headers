
@interface PXPhotosBarsItemIdentifierProviderRecentlyDeleted : PXPhotosBarsItemIdentifierProviderBase <PXPhotosBarsItemIdentifierProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)valuesForModel:(id)arg1 title:(id*)arg2 leadingIdentifiers:(id*)arg3 trailingIdentifiers:(id*)arg4 toolbarIdentifiers:(id*)arg5 hasSharedLibraryOrPreview:(bool)arg6;

@end
