
@interface SearchUIRFCardSectionRowModel : SearchUICardSectionRowModel

@property (nonatomic, readonly) bool fillsBackgroundWithContent;
@property (nonatomic, readonly) bool hasLeadingImage;
@property (nonatomic, readonly) bool prefersNoSeparatorAbove;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) int separatorStyle;

+ (bool)supportsConfigurationFor:(id)arg1;

- (bool)fillsBackgroundWithContent;
- (bool)hasLeadingImage;
- (id)init;
- (id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 itemIdentifier:(id)arg3;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 itemIdentifier:(id)arg4;
- (id)initWithResult:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2;
- (bool)prefersNoSeparatorAbove;
- (id)reuseIdentifier;
- (int)separatorStyle;

@end
