
@interface HUAppleMusicAccountItemProvider : HFItemProvider {
    id /* block */  _filter;
    NSMutableSet * _items;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) NSMutableSet *items;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)mediaProfileContainer;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setItems:(id)arg1;

@end
