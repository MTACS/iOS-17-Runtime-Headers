
@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {
    CNContact * _contact;
    bool  _isEnabled;
    CNContactStore * _store;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) CNContactStore *store;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)_removeContextProviderOnMainThread;
- (bool)allowContextProvider:(id)arg1;
- (id)contact;
- (void)dealloc;
- (id)defaultContextManager;
- (id)getCurrentContext;
- (id)initWithContact:(id)arg1 store:(id)arg2;
- (bool)isEnabled;
- (void)setContact:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
