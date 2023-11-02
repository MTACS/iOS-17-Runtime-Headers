
@interface HFItemGroupItem : HFItem {
    NSSet * _items;
}

@property (nonatomic, readonly) NSSet *items;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;

@end
