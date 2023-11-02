
@interface PGCurationArrayTrait : PGCurationTrait {
    NSArray * _items;
    NSArray * _negativeItems;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *negativeItems;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (bool)isActive;
- (id)items;
- (id)negativeItems;

@end
