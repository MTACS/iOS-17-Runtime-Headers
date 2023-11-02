
@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding> {
    REMFetchResultToken * _fetchResultTokenToDiffAgainst;
}

@property (nonatomic, readonly) REMFetchResultToken *fetchResultTokenToDiffAgainst;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchResultTokenToDiffAgainst;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchResultTokenToDiffAgainst:(id)arg1;
- (id)name;

@end
