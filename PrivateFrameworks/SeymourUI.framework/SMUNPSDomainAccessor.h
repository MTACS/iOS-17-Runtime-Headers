
@interface SMUNPSDomainAccessor : NSObject {
    NPSDomainAccessor * _domainAccessor;
}

- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (id)synchronize;

@end
