
@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying> {
    NSString * _environmentName;
    NSString * _namedDelegatePort;
}

@property (nonatomic, readonly, copy) NSString *environmentName;
@property (nonatomic, readonly, copy) NSString *namedDelegatePort;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)environmentName;
- (unsigned long long)hash;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)namedDelegatePort;

@end
