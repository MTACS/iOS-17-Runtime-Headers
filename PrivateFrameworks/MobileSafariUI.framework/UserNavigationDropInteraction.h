
@interface UserNavigationDropInteraction : UIDropInteraction <UIDropInteractionDelegate, UIDropInteractionDelegate_Private> {
    id /* block */  _navigationHandler;
    bool  _opensNewTab;
    long long  _tabOrder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithOpensNewTab:(bool)arg1 tabOrder:(long long)arg2 navigationHandler:(id /* block */)arg3;

@end
