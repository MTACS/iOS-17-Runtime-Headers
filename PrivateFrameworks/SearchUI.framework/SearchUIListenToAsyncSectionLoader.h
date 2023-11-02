
@interface SearchUIListenToAsyncSectionLoader : SearchUIAsyncSectionLoader {
    SFListenToCardSection * _listenToCardSection;
}

@property (retain) SFListenToCardSection *listenToCardSection;

+ (bool)supportsSectionModel:(id)arg1;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (id)listenToCardSection;
- (id)placeholderCardSections;
- (void)setListenToCardSection:(id)arg1;

@end
