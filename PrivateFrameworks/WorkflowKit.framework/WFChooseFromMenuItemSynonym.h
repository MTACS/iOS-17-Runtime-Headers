
@interface WFChooseFromMenuItemSynonym : NSObject {
    NSUUID * _identity;
    WFVariableString * _synonym;
}

@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) WFVariableString *synonym;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithIdentity:(id)arg1 synonym:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)synonym;

@end
