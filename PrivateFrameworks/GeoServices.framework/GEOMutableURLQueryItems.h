
@interface GEOMutableURLQueryItems : NSObject {
    NSMutableArray * _items;
}

@property (nonatomic, readonly) NSMutableArray *items;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItemWithName:(id)arg1 intValue:(int)arg2;
- (void)addItemWithName:(id)arg1 uint64Value:(unsigned long long)arg2;
- (void)addItemWithName:(id)arg1 uintValue:(unsigned int)arg2;
- (void)addItemWithName:(id)arg1 value:(id)arg2;
- (void)addItemsFromArray:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;

@end
