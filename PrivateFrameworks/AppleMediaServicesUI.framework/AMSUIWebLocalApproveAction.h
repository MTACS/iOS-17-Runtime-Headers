
@interface AMSUIWebLocalApproveAction : AMSUIWebAction {
    NSString * _itemIdentifier;
}

@property (nonatomic, retain) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)itemIdentifier;
- (id)runAction;
- (void)setItemIdentifier:(id)arg1;

@end
