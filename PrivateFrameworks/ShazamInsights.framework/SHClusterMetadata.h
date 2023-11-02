
@interface SHClusterMetadata : NSObject {
    long long  _clusterType;
    NSDate * _creationDate;
    NSString * _storefront;
    NSString * _uniqueHash;
}

@property (nonatomic, readonly) long long clusterType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *storefront;
@property (nonatomic, readonly, copy) NSString *uniqueHash;

- (void).cxx_destruct;
- (long long)clusterType;
- (id)creationDate;
- (id)initWithType:(long long)arg1 storefront:(id)arg2 uniqueHash:(id)arg3 creationDate:(id)arg4;
- (id)storefront;
- (id)uniqueHash;

@end
