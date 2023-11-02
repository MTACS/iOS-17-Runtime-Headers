
@interface WDUserDefaults : NSObject {
    HKKeyValueDomain * _keyValueDomain;
}

@property (nonatomic, retain) HKKeyValueDomain *keyValueDomain;

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)arg1;
- (id)keyValueDomain;
- (void)setKeyValueDomain:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)valueForKey:(id)arg1 callback:(id /* block */)arg2;

@end
