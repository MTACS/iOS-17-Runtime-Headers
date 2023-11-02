
@interface AAUIRUITableViewSectionInjector : AAUITableViewDecorator <AAUITableViewInjectorProtocol> {
    NSString * _injectionType;
    RUITableView * _remoteTableViewController;
    UIView * _viewToInject;
}

@property (nonatomic) NSString *injectionType;

+ (bool)shouldInject:(id)arg1 inPage:(id)arg2;

- (void).cxx_destruct;
- (bool)_shouldInjectViewInSection:(long long)arg1;
- (id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 injectWith:(id)arg3;
- (id)injectionType;
- (void)setInjectionType:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

@end
