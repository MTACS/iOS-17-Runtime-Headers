
@interface WFDeferredMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup> {
    long long  _estimatedItemCount;
    id /* block */  _itemProvider;
    bool  _mayContainSelectedItem;
    bool  onlyDisplayTitleWhenCollapsed;
    unsigned long long  style;
    NSString * title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long estimatedItemCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ itemProvider;
@property (nonatomic) bool mayContainSelectedItem;
@property (nonatomic) bool onlyDisplayTitleWhenCollapsed;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)estimatedItemCount;
- (id)initWithProvider:(id /* block */)arg1;
- (id /* block */)itemProvider;
- (bool)mayContainSelectedItem;
- (bool)onlyDisplayTitleWhenCollapsed;
- (void)setEstimatedItemCount:(long long)arg1;
- (void)setMayContainSelectedItem:(bool)arg1;
- (void)setOnlyDisplayTitleWhenCollapsed:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldCollapse;
- (unsigned long long)style;
- (id)title;

@end
