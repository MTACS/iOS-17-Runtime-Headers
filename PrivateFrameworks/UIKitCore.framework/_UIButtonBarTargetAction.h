
@interface _UIButtonBarTargetAction : NSObject {
    id /* block */  _actionFilter;
    UIBarButtonItem * _barButtonItem;
}

@property (nonatomic, copy) id /* block */ actionFilter;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic, readonly) SEL proxyAction;

- (void).cxx_destruct;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;
- (id /* block */)actionFilter;
- (id)barButtonItem;
- (id)init;
- (id)initWithBarButtonItem:(id)arg1;
- (SEL)proxyAction;
- (void)setActionFilter:(id /* block */)arg1;

@end
