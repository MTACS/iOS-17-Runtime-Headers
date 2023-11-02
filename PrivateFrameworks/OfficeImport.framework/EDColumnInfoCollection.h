
@interface EDColumnInfoCollection : EDSortedCollection {
    EDResources * mResources;
    EDWorksheet * mWorksheet;
}

- (void).cxx_destruct;
- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;
- (id)columnInfoForColumnNumber:(int)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;

@end
