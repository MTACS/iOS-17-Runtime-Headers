
@interface SearchUI.SearchUIArchivedRowModel : SearchUICardSectionRowModel {
    void swiftUIView;
}

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic) bool fillsBackgroundWithContent;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)backgroundColor;
- (bool)fillsBackgroundWithContent;
- (bool)hasView;
- (id)init;
- (id)initWithCardSection:(id)arg1 queryId:(unsigned long long)arg2 itemIdentifier:(id)arg3;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 itemIdentifier:(id)arg4;
- (id)initWithResult:(id)arg1 itemIdentifier:(id)arg2;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFillsBackgroundWithContent:(bool)arg1;

@end
