
@interface PKStackedTextItemGroup : NSObject {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *items;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
