
@interface SBIconListViewIconOverridingLayoutDelegateAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    bool  _invalidated;
    <SBIconListLayoutDelegate> * _layoutDelegate;
    SBIconListView * _listView;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) <SBIconListLayoutDelegate> *layoutDelegate;
@property (nonatomic, readonly) SBIconListView *listView;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithListView:(id)arg1 layoutDelegate:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (id)layoutDelegate;
- (id)listView;
- (id)reason;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
