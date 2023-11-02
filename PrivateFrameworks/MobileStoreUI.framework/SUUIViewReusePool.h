
@interface SUUIViewReusePool : NSObject {
    UIView * _parentView;
    NSMutableDictionary * _reuseClasses;
    NSMutableArray * _viewPool;
}

- (void).cxx_destruct;
- (id)dequeueReusableViewWithReuseIdentifier:(id)arg1;
- (void)hideUnusedViews;
- (id)initWithParentView:(id)arg1;
- (void)recycleReusableViews:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (Class)viewClassWithReuseIdentifier:(id)arg1;

@end
