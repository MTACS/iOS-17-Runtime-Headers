
@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString * _accountID;
    long long  _dataclass;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long dataclass;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataclass;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
