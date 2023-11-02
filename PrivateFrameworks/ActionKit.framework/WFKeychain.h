
@interface WFKeychain : NSObject {
    NSString * _accessGroup;
    NSString * _service;
}

@property (nonatomic, readonly) NSString *accessGroup;
@property (nonatomic, readonly) NSString *service;

- (void).cxx_destruct;
- (id)accessGroup;
- (id)dataForKey:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)items;
- (unsigned long long)numberOfItems;
- (id)service;
- (bool)setData:(id)arg1 forKey:(id)arg2;

@end
