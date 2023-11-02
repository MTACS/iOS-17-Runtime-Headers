
@interface CNContactMenuDisplayingAction : CNContactAction {
    id /* block */  _menuProvider;
}

@property (nonatomic, readonly) id /* block */ menuProvider;

+ (id)contactActionWithTitle:(id)arg1 menuProvider:(id /* block */)arg2 destructive:(bool)arg3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 menuProvider:(id /* block */)arg2 destructive:(bool)arg3;
- (id /* block */)menuProvider;

@end
