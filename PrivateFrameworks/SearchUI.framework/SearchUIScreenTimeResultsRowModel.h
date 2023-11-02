
@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel {
    SFSearchResult * _overrideIdentifyingResult;
    NSString * _title;
}

@property (nonatomic, retain) SFSearchResult *overrideIdentifyingResult;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifyingResult;
- (id)initWithSection:(id)arg1 result:(id)arg2 itemIdentifier:(id)arg3;
- (bool)isTappable;
- (id)overrideIdentifyingResult;
- (void)setOverrideIdentifyingResult:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
