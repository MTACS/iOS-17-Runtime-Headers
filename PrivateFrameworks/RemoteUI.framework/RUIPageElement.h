
@interface RUIPageElement : RUIElement {
    RUIPage * _page;
}

@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) RUIPage *page;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)isLoading;
- (id)page;
- (void)setLoading:(bool)arg1;
- (void)setPage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)staticValues;
- (id)title;

@end
