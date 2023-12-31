
@interface HFStaticItemProvider : HFItemProvider {
    bool  _hasProvidedItems;
    NSSet * _staticItems;
}

@property (nonatomic) bool hasProvidedItems;
@property (nonatomic, retain) NSSet *staticItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasProvidedItems;
- (id)init;
- (id)initWithHome:(id)arg1 items:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)reloadItems;
- (void)setHasProvidedItems:(bool)arg1;
- (void)setStaticItems:(id)arg1;
- (id)staticItems;

@end
