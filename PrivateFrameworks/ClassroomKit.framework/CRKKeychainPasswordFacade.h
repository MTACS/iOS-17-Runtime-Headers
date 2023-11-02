
@interface CRKKeychainPasswordFacade : NSObject {
    NSDictionary * _baseQueryAttributes;
}

@property (nonatomic, readonly, copy) NSDictionary *baseQueryAttributes;

- (void).cxx_destruct;
- (void)addAccessibilityAttributeToQuery:(id)arg1;
- (id)baseQueryAttributes;
- (id)errorForPasswordStatus:(int)arg1;
- (id)initWithBaseQueryAttributes:(id)arg1;
- (id)makeQueryWithAttributes:(id)arg1;
- (id)passwordForService:(id)arg1;
- (id)passwordForService:(id)arg1 error:(id*)arg2;
- (bool)removePasswordForService:(id)arg1 error:(id*)arg2;
- (void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;
- (bool)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4;

@end
