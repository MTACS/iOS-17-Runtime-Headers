
@interface WDElectrocardiogramDataListViewController : WDDataListViewController {
    long long  _mode;
}

- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 dataProvider:(id)arg3 usingInsetStyling:(bool)arg4 mode:(long long)arg5;
- (bool)isEditEnabled;

@end
