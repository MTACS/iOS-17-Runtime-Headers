
@protocol CPUIImageRowCellConfigurationProtocol <NSObject>

@required

- (NSArray *)artworkCatalogs;
- (bool)enabled;
- (id /* block */)selectGridItemBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, long long, void*, id, SEL
- (id /* block */)selectTitleBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)showActivityIndicator;
- (NSString *)title;

@end
