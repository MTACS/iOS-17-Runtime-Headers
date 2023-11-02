
@interface PGCurationSetTrait : PGCurationTrait {
    NSSet * _items;
    NSSet * _negativeItems;
}

@property (nonatomic, readonly) NSSet *items;
@property (nonatomic, readonly) NSSet *negativeItems;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (bool)isActive;
- (id)items;
- (id)negativeItems;

@end
