
@interface CNAccountsAndGroupsSection : NSObject {
    NSString * _identifier;
    bool  _isAllContactsGlobalSection;
    NSArray * _items;
    NSString * _title;
    id /* block */  _titleProvider;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isAllContactsGlobalSection;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) id /* block */ titleProvider;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isAllContactsGlobalSection;
- (bool)isEqual:(id)arg1;
- (id)items;
- (void)setIdentifier:(id)arg1;
- (void)setIsAllContactsGlobalSection:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleProvider:(id /* block */)arg1;
- (id)title;
- (id /* block */)titleProvider;

@end
