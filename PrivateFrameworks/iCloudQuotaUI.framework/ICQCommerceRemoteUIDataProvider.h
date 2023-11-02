
@interface ICQCommerceRemoteUIDataProvider : ISPropertyListProvider {
    ICQCommerceRemoteUIDelegate * _parent;
    bool  _plist;
}

@property (nonatomic) ICQCommerceRemoteUIDelegate *parent;
@property (getter=isPlist, nonatomic) bool plist;

- (void).cxx_destruct;
- (void)_setFailureType:(id)arg1;
- (bool)isPlist;
- (id)parent;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (void)setParent:(id)arg1;
- (void)setPlist:(bool)arg1;

@end
