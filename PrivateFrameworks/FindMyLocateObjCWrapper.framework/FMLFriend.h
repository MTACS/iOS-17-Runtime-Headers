
@interface FMLFriend : NSObject {
    NSDate * _createdAt;
    NSDate * _expiry;
    FMLHandle * _handle;
    long long  _handleType;
    long long  _origin;
    bool  _originatedFromTheSameClient;
}

@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSDate *expiry;
@property (nonatomic, retain) FMLHandle *handle;
@property (nonatomic) long long handleType;
@property (nonatomic) long long origin;
@property (nonatomic) bool originatedFromTheSameClient;

- (void).cxx_destruct;
- (id)comparisonIdentifier;
- (id)createdAt;
- (id)debugDescription;
- (id)description;
- (id)expiry;
- (id)handle;
- (long long)handleType;
- (unsigned long long)hash;
- (id)initWithHandle:(id)arg1 handleType:(long long)arg2 createDate:(id)arg3 expiry:(id)arg4 origin:(long long)arg5 originatedFromTheSameClient:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (long long)origin;
- (bool)originatedFromTheSameClient;
- (void)setCreatedAt:(id)arg1;
- (void)setExpiry:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleType:(long long)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setOriginatedFromTheSameClient:(bool)arg1;

@end
