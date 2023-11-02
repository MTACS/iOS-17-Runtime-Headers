
@interface SearchUIAsyncWatchNowSectionLoader : SearchUIAsyncSectionLoader {
    NSString * _cardSectionId;
    SFWatchListItem * _watchListItem;
}

@property (readonly) NSString *cardSectionId;
@property (readonly) SFWatchListItem *watchListItem;

+ (bool)supportsSectionModel:(id)arg1;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (id)cardSectionId;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSectionModel:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (id)placeholderCardSections;
- (id)watchListItem;

@end
