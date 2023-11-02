
@interface SKUIProductPageProductInfo : NSObject {
    NSMutableArray * _labels;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) long long numberOfEntries;

- (void).cxx_destruct;
- (void)enumerateEntriesWithBlock:(id /* block */)arg1;
- (id)initWithInfoSectionDictionaries:(id)arg1;
- (long long)numberOfEntries;

@end
