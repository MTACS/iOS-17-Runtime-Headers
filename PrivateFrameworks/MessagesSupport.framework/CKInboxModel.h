
@interface CKInboxModel : NSObject {
    <CKInboxModelDelegate> * _delegate;
    id /* block */  _footerAction;
    NSDictionary * _itemsMap;
    id /* block */  _logInboxViewedMetric;
    NSArray * _sections;
}

@property (nonatomic) <CKInboxModelDelegate> *delegate;
@property (nonatomic, copy) id /* block */ footerAction;
@property (nonatomic, retain) NSDictionary *itemsMap;
@property (nonatomic, copy) id /* block */ logInboxViewedMetric;
@property (nonatomic, retain) NSArray *sections;

- (void).cxx_destruct;
- (id)buildItemsMap:(id)arg1;
- (id)delegate;
- (id /* block */)footerAction;
- (id)initWithSections:(id)arg1 footerAction:(id /* block */)arg2;
- (id)itemsMap;
- (id /* block */)logInboxViewedMetric;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setFooterAction:(id /* block */)arg1;
- (void)setIsCollapsed:(bool)arg1;
- (void)setItemsMap:(id)arg1;
- (void)setLogInboxViewedMetric:(id /* block */)arg1;
- (void)setSections:(id)arg1;

@end
