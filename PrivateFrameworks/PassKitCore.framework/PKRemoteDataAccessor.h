
@interface PKRemoteDataAccessor : PKDataAccessor {
    PKPassLibrary * _library;
    NSString * _objectUniqueID;
}

@property (nonatomic, readonly) PKPassLibrary *library;
@property (nonatomic, readonly) NSString *objectUniqueID;

- (void).cxx_destruct;
- (id)archiveData;
- (id)cachedImageSetForType:(long long)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3;
- (id)content;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dataForBundleResources:(id)arg1;
- (id)displayProfileOfType:(long long)arg1;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (id)library;
- (void)noteShared;
- (id)objectUniqueID;
- (id)passLocalizedStringForKey:(id)arg1;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (void)updateSettings:(unsigned long long)arg1;

@end
