
@interface UIDebuggingInformationHierarchyDataContainer : NSObject {
    bool  _collapsed;
    long long  _level;
    UIView * _view;
}

@property (nonatomic) bool collapsed;
@property (nonatomic) long long level;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (bool)collapsed;
- (id)initWithView:(id)arg1 atLevel:(long long)arg2;
- (long long)level;
- (void)setCollapsed:(bool)arg1;
- (void)setLevel:(long long)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
