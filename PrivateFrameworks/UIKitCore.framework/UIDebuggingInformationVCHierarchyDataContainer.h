
@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject {
    long long  _level;
    UIViewController * _viewController;
}

@property (nonatomic) long long level;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 atLevel:(long long)arg2;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
