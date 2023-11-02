
@interface SUScriptNavigationTransition : SUScriptObject {
    SUNavigationContainerViewController * _container;
    NSMutableArray * _finishBlocks;
    long long  _fromIndex;
    NSString * _rightBarButton;
    long long  _status;
    NSString * _title;
    long long  _toIndex;
}

@property (nonatomic, retain) NSMutableArray *finishBlocks;
@property (nonatomic) long long fromIndex;
@property (nonatomic, retain) NSString *rightBarButton;
@property (nonatomic) long long status;
@property (nonatomic) long long toIndex;
@property (nonatomic, retain) SUScriptNavigationItem *topNavigationItem;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)_className;
- (void)addFinishBlock:(id /* block */)arg1;
- (id)attributeKeys;
- (id)finishBlocks;
- (void)finishedLoading;
- (long long)fromIndex;
- (id)initWithContainer:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)rightBarButton;
- (id)scriptAttributeKeys;
- (void)setFinishBlocks:(id)arg1;
- (void)setFromIndex:(long long)arg1;
- (void)setRightBarButton:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setToIndex:(long long)arg1;
- (void)setTopNavigationItem:(id)arg1;
- (long long)status;
- (long long)toIndex;
- (id)topNavigationItem;

@end
