
@interface BDSBookWidgetDataSource : NSObject <BDSBookWidgetDataProviding>

- (void)getBookWidgetDataWithLimit:(long long)arg1 completion:(id /* block */)arg2;

@end
