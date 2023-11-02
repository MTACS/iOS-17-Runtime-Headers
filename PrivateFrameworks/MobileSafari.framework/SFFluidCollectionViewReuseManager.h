
@interface SFFluidCollectionViewReuseManager : NSObject {
    UIView * _containerView;
    NSMutableDictionary * _registrations;
}

@property (nonatomic, readonly) UIView *containerView;

- (void).cxx_destruct;
- (id)containerView;
- (id)dequeueViewWithReuseIdentifier:(id)arg1 elementCategory:(long long)arg2 elementKind:(id)arg3 forIndexPath:(id)arg4;
- (void)enqueueView:(id)arg1;
- (id)initWithContainerView:(id)arg1;
- (void)registerReuseIdentifier:(id)arg1 elementCategory:(long long)arg2 elementKind:(id)arg3 viewCreationBlock:(id /* block */)arg4;

@end
