
@interface PXPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXPeopleSuggestionsDataSource *dataSource;
@property (nonatomic, readonly, copy) PXPeopleSuggestionsMediaProvider *mediaProvider;

+ (id)sharedLibraryPeopleSuggestionsDataSourceManager;

- (void)boostLoading;
- (void)cancelLoading;
- (bool)isLoading;
- (id)mediaProvider;
- (void)startLoading;

@end
