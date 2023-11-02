
@interface VSJSItemGroup : IKJSObject <VSJSItemGroup> {
    <VSJSItemGroupBridge> * _bridge;
    long long  _selectedItem;
}

@property (nonatomic, retain) <VSJSItemGroupBridge> *bridge;
@property (nonatomic) long long selectedItem;

- (void).cxx_destruct;
- (id)bridge;
- (long long)selectedItem;
- (void)setBridge:(id)arg1;
- (void)setSelectedItem:(long long)arg1;

@end
