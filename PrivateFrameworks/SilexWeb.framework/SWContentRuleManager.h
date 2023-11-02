
@interface SWContentRuleManager : NSObject <SWContentRuleManager> {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    WKUserContentController * _userContentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *dispatchGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserContentController *userContentController;

- (void).cxx_destruct;
- (void)addContentRuleList:(id)arg1 identifier:(id)arg2;
- (id)configureContentRules;
- (id)dispatchGroup;
- (id)initWithUserContentController:(id)arg1;
- (void)removeContentListForIdentifier:(id)arg1;
- (id)userContentController;

@end
