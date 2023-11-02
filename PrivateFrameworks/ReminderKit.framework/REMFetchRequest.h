
@interface REMFetchRequest : NSObject <NSSecureCoding> {
    _REMFetchExecutor * _fetchExecutor;
    unsigned long long  _fetchLimit;
    REMFetchResultToken * _fetchResultToken;
    long long  _type;
}

@property (nonatomic, retain) _REMFetchExecutor *fetchExecutor;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) REMFetchResultToken *fetchResultToken;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countOnlyFetchRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchExecutor;
- (unsigned long long)fetchLimit;
- (id)fetchRequestWithFetchResultToken:(id)arg1;
- (id)fetchResultToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchExecutor:(id)arg1;
- (id)metadataFetchRequest;
- (id)objectIDsOnlyFetchRequest;
- (void)setFetchExecutor:(id)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFetchResultToken:(id)arg1;
- (void)setType:(long long)arg1;
- (id)storagesAndParentFetchRequest;
- (id)storagesOnlyFetchRequest;
- (long long)type;

@end
