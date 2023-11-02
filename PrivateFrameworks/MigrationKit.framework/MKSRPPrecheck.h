
@interface MKSRPPrecheck : NSObject {
    NSString * _password;
    NSMutableDictionary * _servers;
}

@property (nonatomic, copy) NSString *password;

- (void).cxx_destruct;
- (id)initWithPassword:(id)arg1;
- (id)password;
- (void)removeServerForKey:(id)arg1;
- (id)serverForKey:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setServerForKey:(id)arg1;

@end
