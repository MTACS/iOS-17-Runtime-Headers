
@interface _ICQPageSpecification : NSObject {
    bool  _hasCancelButtonForBack;
    NSString * _pageClassIdentifier;
    NSString * _pageIdentifier;
    NSString * _pageTitle;
}

@property (nonatomic) bool hasCancelButtonForBack;
@property (nonatomic, retain) NSString *pageClassIdentifier;
@property (nonatomic, retain) NSString *pageIdentifier;
@property (nonatomic, retain) NSString *pageTitle;

- (void).cxx_destruct;
- (id)copyWithBindings:(id)arg1;
- (id)debugDescription;
- (bool)hasCancelButtonForBack;
- (id)pageClassIdentifier;
- (id)pageIdentifier;
- (id)pageTitle;
- (void)setHasCancelButtonForBack:(bool)arg1;
- (void)setPageClassIdentifier:(id)arg1;
- (void)setPageIdentifier:(id)arg1;
- (void)setPageTitle:(id)arg1;

@end
