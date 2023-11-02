
@interface CRKAnnotatedCredential : NSObject {
    NSDictionary * _annotation;
    <CRKKeychainItem> * _credential;
}

@property (nonatomic, readonly, copy) NSDictionary *annotation;
@property (nonatomic, readonly) <CRKKeychainItem> *credential;

- (void).cxx_destruct;
- (id)annotation;
- (id)credential;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCredential:(id)arg1 annotation:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
